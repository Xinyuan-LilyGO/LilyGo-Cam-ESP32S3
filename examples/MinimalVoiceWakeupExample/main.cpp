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
#include "dl_lib_coefgetter_if.h"
#include "esp_wn_iface.h"
#include "esp_wn_models.h"
#include "esp_afe_sr_models.h"
#include "esp_mn_iface.h"
#include "esp_mn_models.h"
#include "SPIFFS.h"
#include "FS.h"


XPowersPMU  PMU;


#define I2S_CH                  I2S_NUM_0

const esp_afe_sr_iface_t *afe_handle = &esp_afe_sr_1mic;
esp_afe_sr_data_t        *afe_data = NULL;
TaskHandle_t             feedTask = NULL;
TaskHandle_t             detectTask = NULL;
int32_t                  *i2s_buff = NULL;
int16_t                  *detect_buffer = NULL;
static void feed_handler(void *ptr);
static void detect_hander(void *ptr);

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
     *  step 2 : Initialize the speech model
    ***********************************/
    Serial.println( "Initializing SPIFFS");

    // Do not change the partition name and partition label, it is fixed in esp-sr
    // see there https://github.com/espressif/esp-sr/blob/master/docs/flash_model/README.md
    if (!SPIFFS.begin(false, "/srmodel", 5, "model")) {
        while (1) {
            Serial.println("Mount SPIFFS failed , Please upload the data directory file!");
            delay(1000);
        }
    }


    /*********************************
     *  step 3 : Initialize i2s device
    ***********************************/
    i2s_config_t i2s_config = {
        .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_RX),
        .sample_rate = 16000,
        .bits_per_sample = I2S_BITS_PER_SAMPLE_32BIT,
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
    afe_config_t afe_config = {
        .aec_init = true,
        .se_init = true,
        .vad_init = true,
        .wakenet_init = true,
        .vad_mode = 3,
        .wakenet_model = &WAKENET_MODEL,
        .wakenet_coeff = (const model_coeff_getter_t *) &WAKENET_COEFF,
        .wakenet_mode = DET_MODE_2CH_90,
        .afe_mode = SR_MODE_LOW_COST,
        .afe_perferred_core = 0,
        .afe_perferred_priority = 5,
        .afe_ringbuf_size = 50,
        .alloc_from_psram = AFE_PSRAM_MEDIA_COST,
        .agc_mode = 2,
    };

    afe_config.aec_init = false;
    afe_config.se_init = false;
    afe_config.vad_init = false;
    afe_config.afe_ringbuf_size = 10;

    afe_data = afe_handle->create_from_config(&afe_config);
    if (!afe_data) {
        Serial.println("create_from_config failed!");
        return;
    }

    // Start the multinet task
    xTaskCreatePinnedToCore(feed_handler, "App/SR/Feed", 4 * 1024, NULL, 5, &feedTask, 0);
    xTaskCreatePinnedToCore(detect_hander, "App/SR/Detect", 5 * 1024, NULL, 5, &detectTask, 0);

}

void loop()
{
    delay(10000);
}



static void feed_handler(void *ptr)
{
    size_t bytes_read;
    int audio_chunksize = afe_handle->get_feed_chunksize(afe_data);
    int nch = afe_handle->get_channel_num(afe_data);
    size_t samp_len = audio_chunksize ;
    size_t samp_len_bytes = samp_len * sizeof(int32_t);

    i2s_buff = (int32_t *)malloc(samp_len_bytes);
    if (!i2s_buff) {
        Serial.println("i2s_buff is empty!!!!");
        vTaskDelete(NULL);
    }
    for (;;) {
        i2s_read(I2S_CH, i2s_buff, samp_len_bytes, &bytes_read, portMAX_DELAY);
        for (int i = 0; i < samp_len; ++i) {
            i2s_buff[i] = i2s_buff[i] >> 14;
        }
        afe_handle->feed(afe_data, (int16_t *)i2s_buff);
    }
    afe_handle->destroy(afe_data);
    vTaskDelete(NULL);
}

static void detect_hander(void *ptr)
{
    uint8_t status;
    int afe_chunksize = afe_handle->get_fetch_chunksize(afe_data);
    int nch = afe_handle->get_channel_num(afe_data);
    detect_buffer = (int16_t *)malloc(afe_chunksize * sizeof(int16_t));

    if (!detect_buffer) {
        Serial.println("detect_buffer is empty!!!!");
        vTaskDelete(NULL);
    }

    Serial.println( "Voice wakeup ready ! , please say \"Hi,ESP\" into the microphone .");
    while (true) {
        int res = afe_handle->fetch(afe_data, detect_buffer);
        if (res == AFE_FETCH_WWE_DETECTED) {
            Serial.println( ">>> Device wakeup <<<");
            PMU.setChargingLedMode(PMU.getChargingLedMode() == XPOWERS_CHG_LED_OFF ? XPOWERS_CHG_LED_ON : XPOWERS_CHG_LED_OFF);
        }
    }
    afe_handle->destroy(afe_data);
    vTaskDelete(NULL);
}
