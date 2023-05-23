/**
 * @file      power.cpp
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */
#include "screen.h"
#include "power.h"

#define XPOWERS_CHIP_AXP2101
#include "XPowersLib.h"
#include "utilities.h"
XPowersPMU PMU;


#define uS_TO_S_FACTOR 1000000ULL   /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP  60           /* Time ESP32 will go to sleep (in seconds) */

const uint64_t deep_sleep_time_ms = TIME_TO_SLEEP * uS_TO_S_FACTOR;

void setSleep(LilyGoWakeupSoucer source)
{
    Serial.println("Going to sleep now");

    if (u8g2) {
        // sleep screen
        u8g2->setPowerSave(true);
    }

    // Extern 3.3V VDD 3100 ~ 3400mV
    PMU.disableDC3();
    // CAM DVDD  1500~1800mV
    PMU.disableALDO1();
    // CAM DVDD 2500~2800mV
    PMU.disableALDO2();
    // CAM AVDD 2800~3000mV
    PMU.disableALDO4();
    // MIC VDD 3300mV
    PMU.disableBLDO1();

    // Disable all interrupts
    PMU.disableIRQ(XPOWERS_AXP2101_ALL_IRQ);
    // Clear all interrupt flags
    PMU.clearIrqStatus();
    // Reserve PMU Pin as wakeup source
    PMU.enableIRQ( XPOWERS_AXP2101_PKEY_SHORT_IRQ );

    // Disable PMU data collection
    PMU.disableVbusVoltageMeasure();
    PMU.disableBattVoltageMeasure();
    PMU.disableSystemVoltageMeasure();

    switch (source) {
    case LILYGO_WAKEUP_SOURCE_PIR:
        while (digitalRead(PIR_INPUT_PIN)) {
            Serial.println("Wait for pir invaild"); delay(1000);
        }
        //Go to sleep after 5 seconds
        delay(5000);
        esp_sleep_enable_ext1_wakeup((1ULL << PIR_INPUT_PIN), ESP_EXT1_WAKEUP_ANY_HIGH);
        esp_deep_sleep_start();
        break;
    case LILYGO_WAKEUP_SOURCE_BUTTON:
        //  PIR VDD
        PMU.disableALDO3();
        while (!digitalRead(USER_BUTTON_PIN)) {
            delay(100);
        }
        esp_sleep_enable_ext1_wakeup((1ULL << USER_BUTTON_PIN), ESP_EXT1_WAKEUP_ALL_LOW);
        esp_deep_sleep_start();
        break;
    case LILYGO_WAKEUP_SOURCE_PMU_PEKEY:
        //  Set the wake-up source to PWRKEY
        PMU.wakeupControl(XPOWERS_AXP2101_WAKEUP_IRQ_PIN_TO_LOW, true);
        //  Set sleep flag
        PMU.enableSleep();
        //  PIR VDD
        PMU.disableALDO3();
        //  ESP32s3 Core VDD
        PMU.disableDC1();
        break;
    case LILYGO_WAKEUP_SOURCE_ESP_TIMER:
        //  PIR VDD
        PMU.disableALDO3();
        esp_sleep_enable_timer_wakeup(deep_sleep_time_ms);
        esp_deep_sleep_start();
        break;
    default:
        break;
    }
}


bool setupPower()
{
    if (!PMU.begin(Wire, AXP2101_SLAVE_ADDRESS, I2C_SDA, I2C_SCL)) {
        Serial.println("Init PMU failed!");
        return false;
    }

    // Set VSY off voltage as 2600mV , Adjustment range 2600mV ~ 3300mV
    PMU.setSysPowerDownVoltage(2600);

    //Turn off not use power channel
    PMU.disableDC2();
    PMU.disableDC3();
    PMU.disableDC4();
    PMU.disableDC5();

    PMU.disableALDO1();
    PMU.disableALDO2();
    PMU.disableALDO3();
    PMU.disableALDO4();
    PMU.disableBLDO1();
    PMU.disableBLDO2();

    PMU.disableCPUSLDO();
    PMU.disableDLDO1();
    PMU.disableDLDO2();

    //Set the working voltage of the modem, please do not modify the parameters
    // PMU.setDC1Voltage(3300);         //ESP32s3 Core VDD
    // PMU.enableDC1();                 //It is enabled by default, please do not operate

    // Board 5 Pin socket 3.3V power output control
    PMU.setDC3Voltage(3100);         //Extern 3100~ 3400V
    PMU.enableDC3();

    // Camera working voltage, please do not change
    PMU.setALDO1Voltage(1500);      // CAM DVDD
    PMU.enableALDO1();

    // Camera working voltage, please do not change
    PMU.setALDO2Voltage(3000);      // CAM DVDD
    PMU.enableALDO2();

    // Camera working voltage, please do not change
    PMU.setALDO4Voltage(3000);      // CAM AVDD
    PMU.enableALDO4();

    // Pyroelectric sensor working voltage, please do not change
    PMU.setALDO3Voltage(3300);        // PIR VDD
    PMU.enableALDO3();

    // Microphone working voltage, please do not change
    PMU.setBLDO1Voltage(3300);       // MIC VDD
    PMU.enableBLDO1();

    Serial.println("DCDC=======================================================================");
    Serial.printf("DC1  : %s   Voltage:%u mV \n",  PMU.isEnableDC1()  ? "+" : "-", PMU.getDC1Voltage());
    Serial.printf("DC2  : %s   Voltage:%u mV \n",  PMU.isEnableDC2()  ? "+" : "-", PMU.getDC2Voltage());
    Serial.printf("DC3  : %s   Voltage:%u mV \n",  PMU.isEnableDC3()  ? "+" : "-", PMU.getDC3Voltage());
    Serial.printf("DC4  : %s   Voltage:%u mV \n",  PMU.isEnableDC4()  ? "+" : "-", PMU.getDC4Voltage());
    Serial.printf("DC5  : %s   Voltage:%u mV \n",  PMU.isEnableDC5()  ? "+" : "-", PMU.getDC5Voltage());
    Serial.println("ALDO=======================================================================");
    Serial.printf("ALDO1: %s   Voltage:%u mV\n",  PMU.isEnableALDO1()  ? "+" : "-", PMU.getALDO1Voltage());
    Serial.printf("ALDO2: %s   Voltage:%u mV\n",  PMU.isEnableALDO2()  ? "+" : "-", PMU.getALDO2Voltage());
    Serial.printf("ALDO3: %s   Voltage:%u mV\n",  PMU.isEnableALDO3()  ? "+" : "-", PMU.getALDO3Voltage());
    Serial.printf("ALDO4: %s   Voltage:%u mV\n",  PMU.isEnableALDO4()  ? "+" : "-", PMU.getALDO4Voltage());
    Serial.println("BLDO=======================================================================");
    Serial.printf("BLDO1: %s   Voltage:%u mV\n",  PMU.isEnableBLDO1()  ? "+" : "-", PMU.getBLDO1Voltage());
    Serial.printf("BLDO2: %s   Voltage:%u mV\n",  PMU.isEnableBLDO2()  ? "+" : "-", PMU.getBLDO2Voltage());
    Serial.println("CPUSLDO====================================================================");
    Serial.printf("CPUSLDO: %s Voltage:%u mV\n",  PMU.isEnableCPUSLDO() ? "+" : "-", PMU.getCPUSLDOVoltage());
    Serial.println("DLDO=======================================================================");
    Serial.printf("DLDO1: %s   Voltage:%u mV\n",  PMU.isEnableDLDO1()  ? "+" : "-", PMU.getDLDO1Voltage());
    Serial.printf("DLDO2: %s   Voltage:%u mV\n",  PMU.isEnableDLDO2()  ? "+" : "-", PMU.getDLDO2Voltage());
    Serial.println("===========================================================================");

    PMU.clearIrqStatus();

    PMU.enableVbusVoltageMeasure();
    PMU.enableBattVoltageMeasure();
    PMU.enableSystemVoltageMeasure();
    PMU.disableTemperatureMeasure();

    // TS Pin detection must be disable, otherwise it cannot be charged
    PMU.disableTSPinMeasure();

    // Disable all interrupts
    PMU.disableIRQ(XPOWERS_AXP2101_ALL_IRQ);
    // Clear all interrupt flags
    PMU.clearIrqStatus();
    // Enable the required interrupt function
    PMU.enableIRQ(
        XPOWERS_AXP2101_BAT_INSERT_IRQ    | XPOWERS_AXP2101_BAT_REMOVE_IRQ      |   //BATTERY
        XPOWERS_AXP2101_VBUS_INSERT_IRQ   | XPOWERS_AXP2101_VBUS_REMOVE_IRQ     |   //VBUS
        XPOWERS_AXP2101_PKEY_SHORT_IRQ    | XPOWERS_AXP2101_PKEY_LONG_IRQ       |   //POWER KEY
        XPOWERS_AXP2101_BAT_CHG_DONE_IRQ  | XPOWERS_AXP2101_BAT_CHG_START_IRQ       //CHARGE
        // XPOWERS_PKEY_NEGATIVE_IRQ | XPOWERS_PKEY_POSITIVE_IRQ   |   //POWER KEY
    );

    // Set the precharge charging current
    PMU.setPrechargeCurr(XPOWERS_AXP2101_PRECHARGE_50MA);
    // Set constant current charge current limit
    PMU.setChargerConstantCurr(XPOWERS_AXP2101_CHG_CUR_300MA);
    // Set stop charging termination current
    PMU.setChargerTerminationCurr(XPOWERS_AXP2101_CHG_ITERM_25MA);

    // Set charge cut-off voltage
    PMU.setChargeTargetVoltage(XPOWERS_AXP2101_CHG_VOL_4V1);

    // Set the time of pressing the button to turn off
    PMU.setPowerKeyPressOffTime(XPOWERS_POWEROFF_4S);
    uint8_t opt = PMU.getPowerKeyPressOffTime();
    Serial.print( "PowerKeyPressOffTime:");
    switch (opt) {
    case XPOWERS_POWEROFF_4S: Serial.println( "4 Second");
        break;
    case XPOWERS_POWEROFF_6S: Serial.println( "6 Second");
        break;
    case XPOWERS_POWEROFF_8S: Serial.println( "8 Second");
        break;
    case XPOWERS_POWEROFF_10S: Serial.println( "10 Second");
        break;
    default:
        break;
    }
    return true;
}

void loopPower()
{
    //todo:
}