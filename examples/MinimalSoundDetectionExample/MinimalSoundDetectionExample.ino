/**
 * @file      main.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */
#include <Arduino.h>
#include <Wire.h>

#define XPOWERS_CHIP_AXP2101
#include "XPowersLib.h"
#include "utilities.h"
#include "driver/i2s.h"
#include "esp_vad.h"


XPowersPMU  PMU;



#define VAD_SAMPLE_RATE_HZ              16000
#define VAD_FRAME_LENGTH_MS             30
#define VAD_BUFFER_LENGTH               (VAD_FRAME_LENGTH_MS * VAD_SAMPLE_RATE_HZ / 1000)
#define I2S_CH                          I2S_NUM_0

size_t bytes_read;
uint8_t status;
int16_t *vad_buff;
vad_handle_t vad_inst;


void setup()
{

    Serial.begin(115200);

    //Start while waiting for Serial monitoring
    while (!Serial);

    delay(3000);

    Serial.println();

    /*********************************
     *  step 1 : Initialize power chip,
    ***********************************/
    if (!PMU.begin(Wire, AXP2101_SLAVE_ADDRESS, I2C_SDA, I2C_SCL)) {
        Serial.println("Failed to initialize power.....");
        while (1) {
            delay(5000);
        }
    }

    //Set the working voltage of the microphone, please do not modify the parameters
    PMU.setBLDO1Voltage(3300);   // MIC VDD 3300
    PMU.enableBLDO1();

    // TS Pin detection must be disable, otherwise it cannot be charged
    PMU.disableTSPinMeasure();

    // Turn off the PMU charging indicator and we use the voice wake-up LED
    PMU.setChargingLedMode(XPOWERS_CHG_LED_OFF);


    /*********************************
     *  step 3 : Initialize i2s device
    ***********************************/
    i2s_config_t i2s_config = {
        .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_RX),
        .sample_rate = 16000,
        .bits_per_sample = I2S_BITS_PER_SAMPLE_16BIT,
        .channel_format = I2S_CHANNEL_FMT_ONLY_LEFT,
        .communication_format = I2S_COMM_FORMAT_STAND_I2S,
        .intr_alloc_flags = ESP_INTR_FLAG_LEVEL2,
        .dma_buf_count = 3,
        .dma_buf_len = 300,
    };

    i2s_pin_config_t pin_config = {
        .mck_io_num = I2S_PIN_NO_CHANGE,
        .bck_io_num = IIS_SCLK_PIN,
        .ws_io_num  = IIS_WS_PIN,
        .data_out_num = I2S_PIN_NO_CHANGE,
        .data_in_num = IIS_DIN_PIN
    };

    i2s_driver_install(I2S_CH, &i2s_config, 0, NULL);
    i2s_set_pin(I2S_CH, &pin_config);
    i2s_zero_dma_buffer(I2S_CH);

    /*********************************
     *  step 4 : Initialize multinet
    ***********************************/
#if ESP_IDF_VERSION_VAL(4,4,1) == ESP_IDF_VERSION
    vad_inst = vad_create(VAD_MODE_0, VAD_SAMPLE_RATE_HZ, VAD_FRAME_LENGTH_MS);
#elif ESP_IDF_VERSION >= ESP_IDF_VERSION_VAL(4,4,1)
    vad_inst = vad_create(VAD_MODE_0);
#else
#error "No support this version."
#endif
    vad_buff = (int16_t *)malloc(VAD_BUFFER_LENGTH * sizeof(short));
    if (vad_buff == NULL) {
        Serial.println("Memory allocation failed!");
        while (1) {
            delay(1000);
        }
    }
}

void loop()
{
    i2s_read(I2S_CH, (char *)vad_buff, VAD_BUFFER_LENGTH * sizeof(short), &bytes_read, portMAX_DELAY);
    // Feed samples to the VAD process and get the result
#if ESP_IDF_VERSION_VAL(4,4,1) == ESP_IDF_VERSION
    vad_state_t vad_state = vad_process(vad_inst, vad_buff);
#elif ESP_IDF_VERSION >= ESP_IDF_VERSION_VAL(4,4,1)
    vad_state_t vad_state = vad_process(vad_inst, vad_buff, VAD_SAMPLE_RATE_HZ, VAD_FRAME_LENGTH_MS);
#else
#error "No support this version."
#endif
    if (vad_state == VAD_SPEECH) {
        Serial.print(millis());
        Serial.println(":Speech detected");
    }
}

