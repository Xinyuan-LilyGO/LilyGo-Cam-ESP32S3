/**
 * @file      power.h
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */

#pragma once


enum LilyGoWakeupSoucer {
    LILYGO_WAKEUP_SOURCE_PIR,
    LILYGO_WAKEUP_SOURCE_BUTTON,
    LILYGO_WAKEUP_SOURCE_PMU_PEKEY,
    LILYGO_WAKEUP_SOURCE_ESP_TIMER,
};

bool setupPower();
void loopPower();
void setSleep(LilyGoWakeupSoucer source);





