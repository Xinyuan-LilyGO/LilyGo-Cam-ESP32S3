/**
 * @file      speechRecognition.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-20
 *
 */
#ifdef  PLATFORMIO_ENV
#include "driver/i2s.h"
#include "dl_lib_coefgetter_if.h"
#include "esp_wn_iface.h"
#include "esp_wn_models.h"
#include "esp_afe_sr_models.h"
#include "esp_mn_iface.h"
#include "esp_mn_models.h"
#include "SPIFFS.h"
#include "FS.h"
#include "utilities.h"
#include "screen.h"

#define I2S_CH                  I2S_NUM_0

static const esp_afe_sr_iface_t *afe_handle = &esp_afe_sr_1mic;
static esp_afe_sr_data_t        *afe_data = NULL;
static TaskHandle_t             feedTask = NULL;
static TaskHandle_t             detectTask = NULL;
static int32_t                  *i2s_buff = NULL;
static int16_t                  *detect_buffer = NULL;

extern QueueHandle_t            recVocie;

static void i2s_init(void)
{
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
}

static void feed_handler(void *ptr)
{
    int audio_chunksize = afe_handle->get_feed_chunksize(afe_data);
    int nch = afe_handle->get_channel_num(afe_data);

    Serial.printf("audio_chunksize:%d\n", audio_chunksize);
    Serial.printf("get_channel_num:%d\n", nch);

    size_t samp_len = audio_chunksize ;
    size_t samp_len_bytes = samp_len * sizeof(int32_t);
    i2s_buff = (int32_t *)malloc(samp_len_bytes);
    if (!i2s_buff) {
        Serial.println("i2s_buff is empty!!!!");
        vTaskDelete(NULL);
    }
    size_t bytes_read;
    for (;;) {
        i2s_read(I2S_CH, i2s_buff, samp_len_bytes, &bytes_read, portMAX_DELAY);
        for (int i = 0; i < samp_len; ++i) {
            i2s_buff[i] = i2s_buff[i] >> 14; // 32:8为有效位， 8:0为低8位， 全为0， AFE的输入为16位语音数据，拿29：13位是为了对语音信号放大。
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

    Serial.println( "Ready");
    while (true) {
        int res = afe_handle->fetch(afe_data, detect_buffer);
        if (res == AFE_FETCH_WWE_DETECTED) {
            Serial.println( ">>> Device wakeup <<<");
            status = LILYGO_TRIGGER_FROM_VOICE;
            xQueueSend(recVocie, &status, pdTICKS_TO_MS(2));

            digitalWrite(EXTERN_PIN1, 1 - digitalRead(EXTERN_PIN1));
            digitalWrite(EXTERN_PIN2, 1 - digitalRead(EXTERN_PIN2));

        }
    }
    afe_handle->destroy(afe_data);
    vTaskDelete(NULL);
}

void setupVoiceWakeup()
{

    Serial.println( "Initializing SPIFFS");

    if (!SPIFFS.begin(false, "/srmodel", 5, "model")) {
        while (1) {
            Serial.println("Mount SPIFFS failed , Please upload the data directory file!");
            delay(1000);
        }
    }

    i2s_init();

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

    xTaskCreatePinnedToCore(feed_handler, "App/SR/Feed", 4 * 1024, NULL, 5, &feedTask, 0);
    xTaskCreatePinnedToCore(detect_hander, "App/SR/Detect", 5 * 1024, NULL, 5, &detectTask, 0);

}


void destroyVocieWakeup()
{
    if (afe_handle) {
        afe_handle->destroy(afe_data);
    }

    if (i2s_buff) {
        free(i2s_buff); i2s_buff = NULL;
    }

    if (detect_buffer) {
        free(detect_buffer); detect_buffer = NULL;
    }

    vTaskDelete(feedTask);
    vTaskDelete(detectTask);
}

#endif

























