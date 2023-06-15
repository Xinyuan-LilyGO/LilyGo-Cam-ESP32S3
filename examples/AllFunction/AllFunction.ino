/**
 * @file      main.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */

#include "screen.h"
#include "camera.h"
#include "button.h"
#include "power.h"
#include "network.h"
#include "server.h"
#include "utilities.h"
#include "esp_camera.h"

void startCameraServer();
void setupVoiceWakeup();

#ifdef  PLATFORMIO_ENV
void setupSpeechRecognition();
#else
#warning "Voice wake-up does not support ArduinoIDE, only supports platformio , see README"
#endif

QueueHandle_t recVocie = NULL;
void getWakeupReason();

static LilyGoTrigger status = LILYGO_TRIGGER_FROM_NONE;

void clearPheralsEvent()
{
    status = LILYGO_TRIGGER_FROM_NONE;
}

void pir_interrupt_event()
{
    BaseType_t xHigherPriorityTaskWoken = pdFALSE;
    static uint8_t status = LILYGO_TRIGGER_FROM_PIR;
    xQueueSendFromISR(recVocie, &status, &xHigherPriorityTaskWoken);
    if ( xHigherPriorityTaskWoken ) {
        portYIELD_FROM_ISR ();
    }
}


void loopPeripherals(void *ptr)
{
    pinMode(PIR_INPUT_PIN, INPUT);
    //Each state change will trigger an interrupt,
    //if you only want to trigger when a human body is sensed, change this to RISING
    attachInterrupt(PIR_INPUT_PIN, pir_interrupt_event, CHANGE);

    // Initialize the external extension pin,
    // and if "Hi, ESP" is triggered, the two pins will be reversed
    pinMode(EXTERN_PIN1, OUTPUT);
    pinMode(EXTERN_PIN2, OUTPUT);

    while (1) {
        if (xQueueReceive(recVocie, &status, pdMS_TO_TICKS(2))) {
            resetScreenTimer();
            setScreenStatus(false);
        }
        loopScreen(status);
        loopPower();
        loopNetwork();
        loopButton();
        delay(8);
    }
}

void setup()
{
    bool ret = false;

    recVocie = xQueueCreate(2, sizeof(uint8_t));

    Serial.begin(115200);

    getWakeupReason();

    if (psramFound()) {
        Serial.println("psram is find !");
    } else {
        Serial.println("psram not find !");
    }

    // Initialize the board power parameters
    setupPower();

#ifdef  PLATFORMIO_ENV
    //Activate the voice wake-up trigger, saying "Hi, ESP" into the microphone will trigger the screen wake-up
    setupVoiceWakeup();
#endif

    // Initialize the camera
    ret = setupCamera();

    // Initialize the screen
    setupScreen(clearPheralsEvent, ret);

    while (!ret) {
        delay(1000);
    }

    // Start button trigger, stand-alone will set camera resolution, long press will set sleep
    setupButton();

    // Start the network, use AP hotspot mode by default
    setupNetwork(USING_AP_MODE);

    // Custom Transport Server
    setupServer();

    /*
    * espressif official example, using asynchronous streaming, unstable, not recommended
    * */
    // startCameraServer();

    xTaskCreate(loopPeripherals, "App/per", 4 * 1024, NULL, 8, NULL);

    // Enable screen timeout off display
    startScreenTimer();

}

void loop()
{
    loopServer();
}



void getWakeupReason()
{
    esp_sleep_wakeup_cause_t wakeup_reason;

    wakeup_reason = esp_sleep_get_wakeup_cause();

    switch (wakeup_reason) {
    case ESP_SLEEP_WAKEUP_UNDEFINED:
        //!< In case of deep sleep, reset was not caused by exit from deep sleep
        Serial.println("In case of deep sleep, reset was not caused by exit from deep sleep");
        break;
    case ESP_SLEEP_WAKEUP_ALL:
        //!< Not a wakeup cause: used to disable all wakeup sources with esp_sleep_disable_wakeup_source
        Serial.println("Not a wakeup cause: used to disable all wakeup sources with esp_sleep_disable_wakeup_source");
        break;
    case ESP_SLEEP_WAKEUP_EXT0:
        //!< Wakeup caused by external signal using RTC_IO
        Serial.println("Wakeup caused by external signal using RTC_IO");
        break;
    case ESP_SLEEP_WAKEUP_EXT1:
        //!< Wakeup caused by external signal using RTC_CNTL
        Serial.println("Wakeup caused by external signal using RTC_CNTL");
        break;
    case ESP_SLEEP_WAKEUP_TIMER:
        //!< Wakeup caused by timer
        Serial.println("Wakeup caused by timer");
        break;
    case ESP_SLEEP_WAKEUP_TOUCHPAD:
        //!< Wakeup caused by touchpad
        Serial.println("Wakeup caused by touchpad");
        break;
    case ESP_SLEEP_WAKEUP_ULP:
        //!< Wakeup caused by ULP program
        Serial.println("Wakeup caused by ULP program");
        break;
    case  ESP_SLEEP_WAKEUP_GPIO:
        //!< Wakeup caused by GPIO (light sleep only)
        Serial.println("Wakeup caused by GPIO (light sleep only)");
        break;
    case ESP_SLEEP_WAKEUP_UART:
        //!< Wakeup caused by UART (light sleep only)
        Serial.println("Wakeup caused by UART (light sleep only)");
        break;
    case ESP_SLEEP_WAKEUP_WIFI:
        //!< Wakeup caused by WIFI (light sleep only)
        Serial.println("Wakeup caused by WIFI (light sleep only)");
        break;
    case ESP_SLEEP_WAKEUP_COCPU:
        //!< Wakeup caused by COCPU int
        Serial.println("Wakeup caused by COCPU int");
        break;
    case ESP_SLEEP_WAKEUP_COCPU_TRAP_TRIG:
        //!< Wakeup caused by COCPU crash
        Serial.println("Wakeup caused by COCPU crash");
        break;
    case  ESP_SLEEP_WAKEUP_BT:
        //!< Wakeup caused by BT (light sleep only)
        Serial.println("Wakeup caused by BT (light sleep only)");
        break;
    default :
        Serial.printf("Wakeup was not caused by deep sleep: %d\n", wakeup_reason);
        break;

    }
}
