/**
 * @file      button.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */
#include "utilities.h"
#include <AceButton.h>                      //https://github.com/bxparks/AceButton
#include "screen.h"
#include "power.h"
#include "WiFi.h"
#include "camera.h"

using namespace ace_button;

AceButton       btns[BUTTON_CONUT];
const uint8_t   buttons[BUTTON_CONUT] = BUTTON_ARRAY;
uint8_t         funcSelectIndex = 0;
uint8_t         funcMaxIndex = 0;

void ButtonHandleEvent(AceButton *, uint8_t eventType, uint8_t buttonState);
void plusButtonCounter();
void decreaseButtonCounter();
void cycleButtonCounter();
uint8_t getButtonCounter();

void setupButton()
{
    for (int i = 0; i < BUTTON_CONUT; ++i) {
        pinMode(buttons[i], INPUT_PULLUP);
        btns[i].init(buttons[i], HIGH, i);
        ButtonConfig *buttonConfig = btns[i].getButtonConfig();
        buttonConfig->setEventHandler(ButtonHandleEvent);
        buttonConfig->setFeature(ButtonConfig::kFeatureClick);
        buttonConfig->setFeature(ButtonConfig::kFeatureLongPress);
        buttonConfig->setFeature(ButtonConfig::kFeatureDoubleClick);
    }
}


void loopButton()
{
    for (int i = 0; i < BUTTON_CONUT; ++i) {
        btns[i].check();
    }
}


void ButtonHandleEvent(AceButton *n, uint8_t eventType, uint8_t buttonState)
{
    Serial.printf("[AceButton][%u]  N:%d E:%u S:%u\n", millis(), n->getId(), eventType, buttonState);
    switch (n->getId()) {
    case 0:
        if (eventType == AceButton::kEventClicked) {
            nextFrameSize();
        } else if (eventType == AceButton::kEventDoubleClicked) {

        } else if (eventType ==  AceButton::kEventLongPressed) {
            // setSleep(LILYGO_WAKEUP_SOURCE_PIR);          // 660uA
            setSleep(LILYGO_WAKEUP_SOURCE_BUTTON);       //400uA
            // setSleep(LILYGO_WAKEUP_SOURCE_PMU_PEKEY);    //Not recommended  ~800uA
            // setSleep(LILYGO_WAKEUP_SOURCE_ESP_TIMER);       //400uA
        }
        break;
    default:
        break;
    }
}








