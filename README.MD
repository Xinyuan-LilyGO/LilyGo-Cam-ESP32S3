<h1 align = "center">✨ LilyGO Camera S3 ✨</h1>

## **English | [中文](README_CN.MD)**

## 1️⃣ Examples preview

````
examples examples
├─AllFunction                       # Full function test
├─MinimalCameraExample              # Minimal camera example
├─MinimalPowersExample              # Minimal PMU operation example
├─MinimalScreenExample              # Minimal screen example
├─MinimalSoundDetectionExample      # Minimal ambient sound detection example
└─MinimalVoiceWakeupExample         # Minimal voice wakeup example
````

## 2️⃣ Quick Start

#### PlatformIO

1. Install [VisualStudioCode](https://code.visualstudio.com/) and [Python](https://www.python.org/)
2. Search for the `PlatformIO` plugin in the `VisualStudioCode` extension and install it.
3. After the installation is complete, you need to restart `VisualStudioCode`
4. After restarting `VisualStudioCode`, select `File` in the upper left corner of `VisualStudioCode` -> `Open Folder` -> select the `LilyGo-Cam-ESP32S3` directory
5. Click on the `platformio.ini` file, and in the `platformio` column, cancel the sample line that needs to be used, please make sure that only one line is valid
6. Click the (✔) symbol in the lower left corner to compile
7. Connect the board to the computer USB
8. Click (→) to upload firmware
9. Click (plug symbol) to monitor serial output
10. To use the `AllFunction` and `MinimalSoundDetectionExample` examples, additional model files need to be uploaded, follow the steps below
    - Click `PlatformIO` (the little bee icon) on the left side of `VisualStudioCode`
    - select `t-cameras3`
    - Select `Platform`
    - After making sure the board is connected to USB, click `Upload Filesystem image`

#### ArduinoIDE

1. Install [Arduino IDE](https://www.arduino.cc/en/software)
2. Install [Arduino ESP32](https://docs.espressif.com/projects/arduino-esp32/en/latest/) 
3. Copy all the folders in the `LilyGo-Cam-ESP32S3/lib` directory to `<C:\Users\UserName\Documents\Arduino\libraries>`. If there is no `libraries` directory, please create a new one. Please note that you are not copying the `lib` directory, but copying the folders in the lib directory
4. Open ArduinoIDE -> Tools
   - Board -> ESP32S3 Dev Module
   - USB CDC On Boot -> Enable  ## Note that you need to change Enable to Disable when USB is not connected, so USB CDC will not prevent the board from starting
   - CPU Frequency -> 240MHz
   - USB DFU On Boot -> Disable
   - Flash Mode -> QIO 80MHz
   - Flash Size -> 16MB(128Mb)
   - USB Firmware MSC On Boot -> Disable
   - PSRAM -> OPI PSRAM
   - Partition Scheme -> 16M Flash(3MB APP/9.9MB FATFS)
   - USB Mode -> Hardware CDC and JIAG
   - Upload Mode -> UART0/Hardware CDC
   - Upload Speed -> 921600
5. Insert USB into the PC and click Upload <If the upload fails, View the Tips below>




## 3️⃣ Tips:

1. Can I use the `Arduino IDE`?
    - `AllFunction` and `MinimalSoundDetectionExample` examples are not acceptable, because model files and custom partition tables need to be uploaded. Currently, `Arduino IDE` does not support custom partition tables and upload model files (the time to write README is 20220930)
    - The rest of the examples are available using the `Arduino IDE`
2. The board integrates PMU (Power management chip), which has short circuit and overload protection. By default, `PWRKEY` needs to be pressed for 6 seconds to turn off the power supply of the board. Press `PWRKEY` for 128 milliseconds to turn on the power supply. If you need to modify the shutdown pressing time, please refer to ` MinimalPowersExample`
3. The `PMU` `TS Pin` detection function needs to be turned off if the charging function is required. There is no NTC sensor on the board by default, so you need to disable the `TS Pin` detection function to use the charging function normally. If the `TS Pin` detection function is not turned off, insert the battery After the PMU charging indicator will flash, charging will be disabled at this time
4. The external `5 Pin` expansion socket of the board, 5V is shared with `PMU` `SYS`, please do not connect an external power supply load greater than 600mA, `3.3V` use `PMU` `DCDC3` power supply, the voltage can be adjusted, The maximum output current should not exceed `1A`
5. The display screen shares the `DCDC1` power channel with the `ESP32S3` core, so the display power supply cannot be turned off. Please set the display screen to sleep mode to reduce power consumption when sleeping.
6. All onboard peripherals except `OLED` can be powered off
7. When the sketch cannot be uploaded, please press and hold the `BOOT` button on the board, then insert the USB, you should be able to see the port in the device manager of the computer, and then click upload sketch again
8. When the power supply channel of `ESP32S3` is closed by mistake, please insert the USB, then press and hold the `BOOT` button of the board, then press and hold the `PWRKEY` button, the board enters the download mode, and the sketch can be uploaded normally.
9. ⚠ **Please understand the risks you need to face before changing the peripheral voltage, otherwise please do not try to change the voltage of the camera and other onboard devices, you may face permanent damage**
10. When you think there is a problem with the board, you can try to burn our factory firmware for testing. You can first rule out whether it is a hardware problem [FactoryFirmware](./firmware/README.MD)



## 4️⃣ Pins:

###### Camera

| PWDN   | Reset  | XCLK   | SDA    | SCL    | VSYNC  | HREF   | PCLK   |
| ------ | ------ | ------ | ------ | ------ | ------ | ------ | ------ |
| N/A    | 39     | 38     | 5      | 4      | 8      | 18     | 12     |
| **D9** | **D8** | **D7** | **D6** | **D5** | **D4** | **D3** | **D2** |
| 9      | 10     | 11     | 13     | 21     | 48     | 47     | 14     |


| OLED/PMU/PIR   | SDA    | SCL      | PMU IRQ | PIR |
| -------------- | ------ | -------- | ------- | --- |
|                | 7      | 6        | 2       | 17  |
| **Microphone** | **WS** | **DATA** | **CLK** |     |
|                | 42     | 41       | 40      |     |

## Power Channel:

| PMU Channel | Microphone | OLED/ESP32S3 | Camera            | Pir   |
| ----------- | ---------- | ------------ | ----------------- | ----- |
|             | BLDO1      | DCDC1        | ALDO1/ALDO2/ALDO4 | ALDO3 |