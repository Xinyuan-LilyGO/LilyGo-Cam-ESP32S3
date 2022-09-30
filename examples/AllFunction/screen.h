/**
 * @file      screen.h
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */

#pragma once


#include <Wire.h>
#include <U8g2lib.h>

typedef   void (*screen_off_cb_t)(void);


enum LilyGoTrigger {
    LILYGO_TRIGGER_FROM_NONE,
    LILYGO_TRIGGER_FROM_PIR,
    LILYGO_TRIGGER_FROM_VOICE,
};

extern U8G2_SSD1306_128X64_NONAME_F_HW_I2C *u8g2;


void setupScreen(screen_off_cb_t cb, bool camera);
void loopScreen(LilyGoTrigger trigger);
void setScreenStatus(bool en);
void resetScreenTimer();
void startScreenTimer();






