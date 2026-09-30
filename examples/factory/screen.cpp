/**
 * @file      screen.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */
#include "screen.h"
#include "WiFi.h"
#include "microphone.h"
#include "network.h"
#include "server.h"
#include "esp_camera.h"
#include "utilities.h"

U8G2_SSD1306_128X64_NONAME_F_HW_I2C *u8g2 = NULL;
static char buffer[256] = {0};
/*
  Draw a string with specified pixel offset.
  The offset can be negative.
  Limitation: The monochrome font with 8 pixel per glyph
*/
void drawScrollString(int16_t offset, const char *s)
{
    static char buf[36];  // should for screen with up to 256 pixel width
    size_t len;
    size_t char_offset = 0;
    u8g2_uint_t dx = 0;
    size_t visible = 0;
    u8g2->setDrawColor(0);     // clear the scrolling area
    u8g2->drawBox(0, 49, u8g2->getDisplayWidth(), u8g2->getDisplayHeight() - 1);
    u8g2->setDrawColor(1);     // set the color for the text
    len = strlen(s);
    if ( offset < 0 ) {
        char_offset = (-offset) / 8;
        dx = offset + char_offset * 8;
        if ( char_offset >= u8g2->getDisplayWidth() / 8 )
            return;
        visible = u8g2->getDisplayWidth() / 8 - char_offset + 1;
        strncpy(buf, s, visible);
        buf[visible] = '\0';
        u8g2->setFont(u8g2_font_8x13_mf);
        u8g2->drawStr(char_offset * 8 - dx, 62, buf);
    } else {
        char_offset = offset / 8;
        if ( char_offset >= len )
            return;   // nothing visible
        dx = offset - char_offset * 8;
        visible = len - char_offset;
        if ( visible > u8g2->getDisplayWidth() / 8 + 1 )
            visible = u8g2->getDisplayWidth() / 8 + 1;
        strncpy(buf, s + char_offset, visible);
        buf[visible] = '\0';
        u8g2->setFont(u8g2_font_8x13_mf);
        u8g2->drawStr(-dx, 62, buf);
    }
}


void setupScreen(bool camera)
{
    Wire.beginTransmission(0x3C);
    if (Wire.endTransmission() == 0) {
        Serial.println("Started OLED");
        u8g2 = new U8G2_SSD1306_128X64_NONAME_F_HW_I2C(U8G2_R2, U8X8_PIN_NONE);
        u8g2->begin();
        u8g2->clearBuffer();
        u8g2->setFlipMode(0);
        u8g2->setFontMode(1); // Transparent
        u8g2->setDrawColor(1);
        u8g2->setFontDirection(0);
        u8g2->firstPage();
        do {
            u8g2->setFont(u8g2_font_inb19_mr);
            u8g2->drawStr(0, 30, "LilyGo");
            u8g2->drawHLine(2, 35, 47);
            u8g2->drawHLine(3, 36, 47);
            u8g2->drawVLine(45, 32, 12);
            u8g2->drawVLine(46, 33, 12);
            u8g2->setFont(u8g2_font_inb19_mf);
            u8g2->drawStr(58, 60, "Cam");
        } while ( u8g2->nextPage() );

        u8g2->setFont(u8g2_font_fur11_tf);
        if (camera) {
            sensor_t *s = esp_camera_sensor_get();
            if (s) {
                camera_sensor_info_t *sinfo = esp_camera_sensor_get_info(&(s->id));
                u8g2->drawStr(0, 58, sinfo->name);
            }
        } else {
            u8g2->drawStr(0, 58, "N/A");
        }
        u8g2->sendBuffer();
        delay(5000);
    }
}


void loopScreen(LilyGoTrigger trigger)
{
    static int16_t offset;
    static int16_t len ;
    static uint32_t lastMeterUpdate;

    if (!u8g2) {
        return ;
    }

    if (strlen(buffer) == 0) {
        u8g2->clearBuffer();
        String ipAddress = getIpAddress();
        if (ipAddress == "") {
            Serial.println("Ipaddress is empty");
            return;
        }
        snprintf(buffer, sizeof(buffer), "Camera Ready! Please connect to the hotspot, then open the browser and enter %s to connect", ipAddress.c_str());
        offset   = -(int16_t)u8g2->getDisplayWidth();
        len = strlen(buffer);
    }


    if (offset < len * 8 + 1) {
        drawScrollString(offset, buffer);           // no clearBuffer required, screen will be partially cleared here
    } else {
        offset = -(int16_t)u8g2->getDisplayWidth();
    }
    offset += 2;

    const uint32_t now = millis();
    if (now - lastMeterUpdate >= 50) {
        lastMeterUpdate = now;
        const uint32_t level = getMicrophoneLevel();
        const uint32_t limitedLevel = min<uint32_t>(level, MIC_LEVEL_METER_MAX);
        const uint8_t barWidth = static_cast<uint64_t>(limitedLevel) * 116 /
                                 MIC_LEVEL_METER_MAX;
        const uint8_t thresholdX = 5 + static_cast<uint64_t>(
            min<uint32_t>(MIC_SOUND_THRESHOLD, MIC_LEVEL_METER_MAX)) *
            116 / MIC_LEVEL_METER_MAX;
        char levelText[24];
        char fpsText[16];
        const uint16_t fpsX10 = getStreamFpsX10();
        snprintf(levelText, sizeof(levelText), "RMS %lu",
                 static_cast<unsigned long>(level));
        snprintf(fpsText, sizeof(fpsText), "FPS %u.%u",
                 fpsX10 / 10, fpsX10 % 10);

        u8g2->setDrawColor(0);
        u8g2->drawBox(0, 0, 128, 49);
        u8g2->setDrawColor(1);
        u8g2->setFont(u8g2_font_6x10_tf);
        u8g2->drawStr(4, 10, "MIC LEVEL");
        if (trigger == LILYGO_TRIGGER_FROM_PIR) {
            u8g2->drawStr(105, 10, "PIR");
        }
        u8g2->drawFrame(4, 15, 120, 17);
        if (barWidth > 0) {
            u8g2->drawBox(6, 17, barWidth, 13);
        }
        u8g2->drawVLine(thresholdX, 12, 3);
        u8g2->drawStr(4, 45, levelText);
        u8g2->drawStr(76, 45, fpsText);
    }
    u8g2->sendBuffer();
}

















