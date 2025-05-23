/**
 * @file      QRCodeReader.ino
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2025  ShenZhen XinYuan Electronic Technology Co., Ltd
 * @date      2025-05-23
 * 
 */
#include <Arduino.h>
#include <ESP32QRCodeReader.h>
#include "utilities.h"
#define XPOWERS_CHIP_AXP2101
#include "XPowersLib.h"

CameraPins config = {
    .PWDN_GPIO_NUM =  _PWDN_GPIO_NUM,
    .RESET_GPIO_NUM = _RESET_GPIO_NUM,
    .XCLK_GPIO_NUM = _XCLK_GPIO_NUM,
    .SIOD_GPIO_NUM = _SIOD_GPIO_NUM,
    .SIOC_GPIO_NUM = _SIOC_GPIO_NUM,
    .Y9_GPIO_NUM = _Y9_GPIO_NUM,
    .Y8_GPIO_NUM = _Y8_GPIO_NUM,
    .Y7_GPIO_NUM = _Y7_GPIO_NUM,
    .Y6_GPIO_NUM = _Y6_GPIO_NUM,
    .Y5_GPIO_NUM = _Y5_GPIO_NUM,
    .Y4_GPIO_NUM = _Y4_GPIO_NUM,
    .Y3_GPIO_NUM = _Y3_GPIO_NUM,
    .Y2_GPIO_NUM = _Y2_GPIO_NUM,
    .VSYNC_GPIO_NUM = _VSYNC_GPIO_NUM,
    .HREF_GPIO_NUM =  _HREF_GPIO_NUM,
    .PCLK_GPIO_NUM =  _PCLK_GPIO_NUM,
};

ESP32QRCodeReader reader(config);
XPowersPMU  PMU;

void onQrCodeTask(void *pvParameters)
{
    struct QRCodeData qrCodeData;

    while (true) {
        if (reader.receiveQrCode(&qrCodeData, 100)) {
            Serial.println("Found QRCode");
            if (qrCodeData.valid) {
                Serial.print("Payload: ");
                Serial.println((const char *)qrCodeData.payload);
            } else {
                Serial.print("Invalid: ");
                Serial.println((const char *)qrCodeData.payload);
            }
        }
        vTaskDelay(100 / portTICK_PERIOD_MS);
    }
}

void setup()
{
    Serial.begin(115200);

    //Start while waiting for Serial monitoring
    while (!Serial);

    delay(3000);

    Serial.println();

    /*********************************
     *  step 1 : Initialize power chip,
     *  turn on camera power channel
    ***********************************/
    if (!PMU.begin(Wire, AXP2101_SLAVE_ADDRESS, I2C_SDA, I2C_SCL)) {
        Serial.println("Failed to initialize power.....");
        while (1) {
            delay(5000);
        }
    }
    //Set the working voltage of the camera, please do not modify the parameters
    PMU.setALDO1Voltage(1800);  // CAM DVDD  1500~1800
    PMU.enableALDO1();
    PMU.setALDO2Voltage(2800);  // CAM DVDD 2500~2800
    PMU.enableALDO2();
    PMU.setALDO4Voltage(3000);  // CAM AVDD 2800~3000
    PMU.enableALDO4();

    // TS Pin detection must be disable, otherwise it cannot be charged
    PMU.disableTSPinMeasure();

    reader.setup();

    Serial.println("Setup QRCode Reader");

    reader.beginOnCore(1);

    Serial.println("Begin on Core 1");

    xTaskCreate(onQrCodeTask, "onQrCode", 4 * 1024, NULL, 4, NULL);
}

void loop()
{
    delay(100);
}