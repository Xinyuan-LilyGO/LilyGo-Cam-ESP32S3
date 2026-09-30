/**
 * @file      microphone.cpp
 * @license   MIT
 * @brief     I2S/PDM microphone level test for Arduino-ESP32 3.x.
 */
#include <Arduino.h>
#include <ESP_I2S.h>
#include <math.h>

#include "microphone.h"
#include "screen.h"
#include "utilities.h"

extern QueueHandle_t peripheralEvents;

namespace {

constexpr uint32_t MIC_SAMPLE_RATE = 16000;
constexpr size_t MIC_FRAME_SAMPLES = 480;  // 30 ms at 16 kHz
constexpr uint8_t MIC_TRIGGER_FRAMES = 3;
constexpr uint32_t MIC_TRIGGER_COOLDOWN_MS = 2000;
constexpr uint32_t MIC_PRINT_INTERVAL_MS = 500;

I2SClass microphone(I2S_NUM_0);
TaskHandle_t microphoneTask = nullptr;
volatile uint32_t microphoneLevel = 0;

struct AudioLevel {
    uint32_t rms;
    uint32_t peak;
};

#if LILYGO_MIC_TYPE == LILYGO_MIC_I2S
// Standard I2S always uses a complete left/right frame on the wire. Reading
// both slots also supports microphones whose channel-select pin is strapped
// to either side.
int32_t rawSamples[MIC_FRAME_SAMPLES * 2];
#else
int16_t rawSamples[MIC_FRAME_SAMPLES];
#endif

template <typename Sample>
AudioLevel calculateLevel(const Sample *samples, size_t count,
                          size_t stride, uint8_t rightShift)
{
    int64_t sum = 0;
    for (size_t i = 0; i < count; ++i) {
        sum += samples[i * stride] >> rightShift;
    }
    const int32_t mean = sum / static_cast<int32_t>(count);

    uint64_t squareSum = 0;
    uint32_t peak = 0;
    for (size_t i = 0; i < count; ++i) {
        const int32_t sample = samples[i * stride] >> rightShift;
        const int32_t centered = sample - mean;
        const uint32_t magnitude = centered < 0 ? -centered : centered;
        peak = max(peak, magnitude);
        squareSum += static_cast<int64_t>(centered) * centered;
    }

    return {
        static_cast<uint32_t>(sqrtf(
            static_cast<float>(squareSum) / static_cast<float>(count))),
        peak
    };
}

bool beginMicrophoneBus()
{
#if LILYGO_MIC_TYPE == LILYGO_MIC_PDM
    pinMode(MIC_PDM_LR_PIN, OUTPUT);
    digitalWrite(MIC_PDM_LR_PIN, MIC_PDM_LR_LEVEL);
    microphone.setPinsPdmRx(MIC_CLK_PIN, MIC_DATA_PIN);
    return microphone.begin(
        I2S_MODE_PDM_RX,
        MIC_SAMPLE_RATE,
        I2S_DATA_BIT_WIDTH_16BIT,
        I2S_SLOT_MODE_MONO,
        I2S_STD_SLOT_RIGHT);
#else
    microphone.setPins(MIC_CLK_PIN, MIC_I2S_WS_PIN, -1, MIC_DATA_PIN);
    return microphone.begin(
        I2S_MODE_STD,
        MIC_SAMPLE_RATE,
        I2S_DATA_BIT_WIDTH_32BIT,
        I2S_SLOT_MODE_STEREO,
        I2S_STD_SLOT_BOTH);
#endif
}

void microphoneTaskHandler(void *parameter)
{
    uint8_t loudFrames = 0;
    uint32_t lastTriggerMs = 0;
    uint32_t lastPrintMs = 0;

    for (;;) {
        const size_t bytesRead = microphone.readBytes(
            reinterpret_cast<char *>(rawSamples), sizeof(rawSamples));
        if (bytesRead == 0) {
            Serial.printf("Microphone read failed: %d\n", microphone.lastError());
            vTaskDelay(pdMS_TO_TICKS(100));
            continue;
        }

#if LILYGO_MIC_TYPE == LILYGO_MIC_I2S
        const size_t frameCount = bytesRead / (2 * sizeof(rawSamples[0]));
        // Match the gain used by the original firmware: the microphone's
        // valid data occupies bits 31:8 of each 32-bit slot.
        const AudioLevel left = calculateLevel(rawSamples, frameCount, 2, 14);
        const AudioLevel right = calculateLevel(rawSamples + 1, frameCount, 2, 14);
        const bool useRight = right.rms > left.rms;
        const AudioLevel level = useRight ? right : left;
#else
        const size_t sampleCount = bytesRead / sizeof(rawSamples[0]);
        const AudioLevel level = calculateLevel(rawSamples, sampleCount, 1, 0);
#endif

        // Smooth the meter without delaying sound-trigger detection.
        microphoneLevel = (microphoneLevel * 3 + level.rms) / 4;

        const uint32_t now = millis();
        if (now - lastPrintMs >= MIC_PRINT_INTERVAL_MS) {
            lastPrintMs = now;
// #if LILYGO_MIC_TYPE == LILYGO_MIC_I2S
//             Serial.printf("Microphone RMS: %lu, peak: %lu (I2S %s, L=%lu, R=%lu)\n",
//                           static_cast<unsigned long>(level.rms),
//                           static_cast<unsigned long>(level.peak),
//                           useRight ? "right" : "left",
//                           static_cast<unsigned long>(left.rms),
//                           static_cast<unsigned long>(right.rms));
// #else
//             Serial.printf("Microphone RMS: %lu, peak: %lu (PDM)\n",
//                           static_cast<unsigned long>(level.rms),
//                           static_cast<unsigned long>(level.peak));
// #endif
        }

        if (level.rms >= MIC_SOUND_THRESHOLD) {
            loudFrames = min<uint8_t>(loudFrames + 1, MIC_TRIGGER_FRAMES);
        } else {
            loudFrames = 0;
        }
        if (loudFrames >= MIC_TRIGGER_FRAMES &&
                now - lastTriggerMs >= MIC_TRIGGER_COOLDOWN_MS) {
            const LilyGoTrigger event = LILYGO_TRIGGER_FROM_MICROPHONE;
            xQueueSend(peripheralEvents, &event, 0);
            lastTriggerMs = now;
            loudFrames = 0;
            // Serial.println("Sound detected");
        }
    }
}

}  // namespace

uint32_t getMicrophoneLevel()
{
    return microphoneLevel;
}

bool setupMicrophone()
{
    microphone.setTimeout(1000);
    if (!beginMicrophoneBus()) {
        Serial.printf("Failed to initialize %s microphone: %d\n",
#if LILYGO_MIC_TYPE == LILYGO_MIC_PDM
                      "PDM",
#else
                      "I2S",
#endif
                      microphone.lastError());
        return false;
    }

    Serial.printf("%s microphone ready (DATA=%d, CLK=%d",
#if LILYGO_MIC_TYPE == LILYGO_MIC_PDM
                  "PDM", MIC_DATA_PIN, MIC_CLK_PIN);
    Serial.printf(", L/R=%d)\n", MIC_PDM_LR_PIN);
#else
                  "I2S", MIC_DATA_PIN, MIC_CLK_PIN);
    Serial.printf(", WS=%d)\n", MIC_I2S_WS_PIN);
#endif

    return xTaskCreatePinnedToCore(
               microphoneTaskHandler,
               "App/Microphone",
               4 * 1024,
               nullptr,
               5,
               &microphoneTask,
               0) == pdPASS;
}
