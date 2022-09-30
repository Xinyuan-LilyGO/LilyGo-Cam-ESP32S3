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
#include "network.h"
#include "esp_camera.h"
#include "utilities.h"

U8G2_SSD1306_128X64_NONAME_F_HW_I2C *u8g2 = NULL;
static TimerHandle_t timerHandle = NULL;
static char buffer[256] = {0};
static bool screenOff = false;
static screen_off_cb_t off_cb = NULL;
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


void screenTimerCallback(TimerHandle_t timer)
{
    if (off_cb) {
        off_cb();
    }
    setScreenStatus(true);
}

void setupScreen(screen_off_cb_t cb, bool camera)
{
    off_cb = cb;
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


void startScreenTimer()
{
    if (!timerHandle) {
        timerHandle = xTimerCreate("App/timer", pdMS_TO_TICKS(5000), true, NULL, screenTimerCallback);
        xTimerStart(timerHandle, portMAX_DELAY);
    }
}

void resetScreenTimer()
{
    xTimerReset(timerHandle, portMAX_DELAY);
}

void setScreenStatus(bool en)
{
    if (screenOff == en)return;
    screenOff = en;
    if (u8g2) {
        u8g2->setPowerSave(en);
    }
}

void loopScreen(LilyGoTrigger trigger)
{
    static  bool screenTrigger = false;
    static int16_t offset;
    static int16_t len ;
    static LilyGoTrigger lastTrigger;

    if (!u8g2) {
        return ;
    }
    if (screenOff && trigger == LILYGO_TRIGGER_FROM_NONE) {
        return;
    }

    if (strlen(buffer) == 0) {
        u8g2->clearBuffer();

        u8g2->setDrawColor(0);
        u8g2->drawBox(0, 0, 128, 50);
        u8g2->setDrawColor(1);
        u8g2->setFont(u8g2_font_logisoso16_tr);
        u8g2->drawStr(20, 30, "PirInvalid");
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

    if (lastTrigger != trigger) {
        lastTrigger = trigger;
        u8g2->setDrawColor(0);
        u8g2->drawBox(0, 0, 128, 50);
        u8g2->setDrawColor(1);
        u8g2->setFont(u8g2_font_open_iconic_embedded_4x_t);
        u8g2->drawGlyph(5, 42, 67);
        u8g2->setFont(u8g2_font_timR10_tr);
        if (trigger ==  LILYGO_TRIGGER_FROM_PIR) {
            u8g2->drawStr(45, 35,  "Pir Trigger");
        } else {
            u8g2->drawStr(40, 35,  "Voice Trigger");


        }
    }
    u8g2->sendBuffer();
}





















