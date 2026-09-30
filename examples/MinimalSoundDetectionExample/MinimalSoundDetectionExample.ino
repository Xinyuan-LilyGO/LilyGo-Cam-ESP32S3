/**
 * @file      MinimalSoundDetectionExample.ino
 * @license   MIT
 * @brief     I2S/PDM microphone level and sound trigger example.
 */
#include <Arduino.h>
#include <ESP_I2S.h>
#include <Wire.h>
#include <math.h>

#define XPOWERS_CHIP_AXP2101
#include "XPowersLib.h"
#include "utilities.h"

constexpr uint32_t SAMPLE_RATE = 16000;
constexpr size_t FRAME_SAMPLES = 480;
constexpr uint32_t SOUND_THRESHOLD = 1200;

XPowersPMU PMU;
I2SClass microphone(I2S_NUM_0);

#if LILYGO_MIC_TYPE == LILYGO_MIC_I2S
using SampleType = int32_t;
SampleType samples[FRAME_SAMPLES * 2];
#else
using SampleType = int16_t;
SampleType samples[FRAME_SAMPLES];
#endif

struct AudioLevel {
    uint32_t rms;
    uint32_t peak;
};

AudioLevel calculateLevel(const SampleType *data, size_t count,
                          size_t stride, uint8_t rightShift)
{
    int64_t sum = 0;
    for (size_t i = 0; i < count; ++i) {
        sum += data[i * stride] >> rightShift;
    }
    const int32_t mean = sum / static_cast<int32_t>(count);

    uint64_t squareSum = 0;
    uint32_t peak = 0;
    for (size_t i = 0; i < count; ++i) {
        const int32_t centered = (data[i * stride] >> rightShift) - mean;
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

void setup()
{
    Serial.begin(115200);
    delay(1000);

    if (!PMU.begin(Wire, AXP2101_SLAVE_ADDRESS,
                   BOARD_I2C_SDA, BOARD_I2C_SCL)) {
        Serial.println("Failed to initialize power");
        while (true) {
            delay(1000);
        }
    }

    PMU.setBLDO1Voltage(3300);
    PMU.enableBLDO1();
    PMU.disableTSPinMeasure();
    PMU.setChargingLedMode(XPOWERS_CHG_LED_OFF);

    microphone.setTimeout(1000);
#if LILYGO_MIC_TYPE == LILYGO_MIC_PDM
    pinMode(MIC_PDM_LR_PIN, OUTPUT);
    digitalWrite(MIC_PDM_LR_PIN, MIC_PDM_LR_LEVEL);
    microphone.setPinsPdmRx(MIC_CLK_PIN, MIC_DATA_PIN);
    const bool ready = microphone.begin(
        I2S_MODE_PDM_RX, SAMPLE_RATE, I2S_DATA_BIT_WIDTH_16BIT,
        I2S_SLOT_MODE_MONO, I2S_STD_SLOT_RIGHT);
    Serial.printf("PDM microphone: DATA=%d, CLK=%d, L/R=%d\n",
                  MIC_DATA_PIN, MIC_CLK_PIN, MIC_PDM_LR_PIN);
#else
    microphone.setPins(MIC_CLK_PIN, MIC_I2S_WS_PIN, -1, MIC_DATA_PIN);
    const bool ready = microphone.begin(
        I2S_MODE_STD, SAMPLE_RATE, I2S_DATA_BIT_WIDTH_32BIT,
        I2S_SLOT_MODE_STEREO, I2S_STD_SLOT_BOTH);
    Serial.printf("I2S microphone: DATA=%d, BCLK=%d, WS=%d\n",
                  MIC_DATA_PIN, MIC_CLK_PIN, MIC_I2S_WS_PIN);
#endif

    if (!ready) {
        Serial.printf("Microphone initialization failed: %d\n",
                      microphone.lastError());
        while (true) {
            delay(1000);
        }
    }
}

void loop()
{
    const size_t bytesRead = microphone.readBytes(
        reinterpret_cast<char *>(samples), sizeof(samples));
    if (bytesRead == 0) {
        Serial.printf("Microphone read failed: %d\n", microphone.lastError());
        delay(100);
        return;
    }

#if LILYGO_MIC_TYPE == LILYGO_MIC_I2S
    const size_t frameCount = bytesRead / (2 * sizeof(samples[0]));
    const AudioLevel left = calculateLevel(samples, frameCount, 2, 14);
    const AudioLevel right = calculateLevel(samples + 1, frameCount, 2, 14);
    const bool useRight = right.rms > left.rms;
    const AudioLevel level = useRight ? right : left;
#else
    const size_t sampleCount = bytesRead / sizeof(samples[0]);
    const AudioLevel level = calculateLevel(samples, sampleCount, 1, 0);
#endif

    static uint32_t lastPrintMs = 0;
    static uint8_t loudFrames = 0;
    const uint32_t now = millis();
    if (now - lastPrintMs >= 250) {
        lastPrintMs = now;
        Serial.printf("Microphone RMS: %lu, peak: %lu\n",
                      static_cast<unsigned long>(level.rms),
                      static_cast<unsigned long>(level.peak));
    }

    if (level.rms >= SOUND_THRESHOLD) {
        loudFrames = min<uint8_t>(loudFrames + 1, 3);
    } else {
        loudFrames = 0;
    }
    if (loudFrames == 3) {
        Serial.println("Sound detected");
        loudFrames = 0;
    }
}
