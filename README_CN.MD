<h1 align = "center">✨ LilyGO Camera S3 ✨</h1>

## **[English](README.MD) | 中文**

## News

* CameraS3 有两个版本,v1.6版本为I2S接口麦克风,v1.7版本为PDM接口麦克风

## 1️⃣ Examples preview

```text
examples
├─factory                           # 完整出厂测试（v1.6 I2S / v1.7 PDM）
├─MinimalCameraExample              # 最小摄像头示例
├─MinimalCameraStationExample       # STA 模式最小摄像头示例
├─MinimalPowersExample              # 最小PMU操作示例
├─MinimalScreenExample              # 最小屏幕示例
├─MinimalSoundDetectionExample      # 最小环境声音检测示例
└─QRCodeReader                      # 二维码识别示例
```


## 2️⃣ Quick Start

#### PlatformIO

1. 安装[VisualStudioCode](https://code.visualstudio.com/) 和 [Python](https://www.python.org/)
2. 在`VisualStudioCode`扩展中搜索`PlatformIO`插件并安装.
3. 安装完成后需要将`VisualStudioCode`重新启动
4. 重新开启`VisualStudioCode`后,选择 `VisualStudioCode` 左上角的 `文件` -> `打开文件夹` ->选择 `LilyGo-Cam-ESP32S3` 目录
5. v1.6 I2S 麦克风版本选择 `v1_6` 环境，v1.7 PDM 麦克风版本选择 `v1_7` 环境。如需编译最小示例，请修改 `platformio.ini` 中的 `src_dir`
6. 点击左下角的（✔）符号编译所选环境
7. 将板子与电脑USB进行连接
8. 点击（→）上传固件
9. 点击 (插头符号) 监视串行输出

#### ArduinoIDE

1. 安装 [ArduinoIDE](https://www.arduino.cc/en/software)
2. 安装 [Arduino ESP32](https://docs.espressif.com/projects/arduino-esp32/en/latest/) `3.3.11` 版本
3. 将 `LilyGo-Cam-ESP32S3/lib` 目录内的所有文件夹拷贝到`<C:\Users\UserName\Documents\Arduino\libraries>`,如果没有`libraries`目录,请新建,请注意,不是拷贝`lib`目录,而是拷贝lib目录里面的文件夹
4. 打开ArduinoIDE -> Tools 
   - Board -> ESP32S3 Dev Module
   - USB CDC On Boot -> Enable   # 注意，在不连接USB的时候你需要将Enable改为Disable，这样USB CDC 不会阻止板子的启动
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
5. 使用 `factory` 或 `MinimalSoundDetectionExample` 时，在示例的 `utilities.h` 中选择硬件版本。默认是 v1.6/I2S；v1.7/PDM 请改为 `LILYGO_BOARD_V1_7`
6. 插入USB到PC,点击上传<如果无法顺利上传,请查看下方常见问题>


## 3️⃣ Tips:

1. 当前所有示例都可以直接使用 `Arduino IDE` 打开；草图文件名与目录名一致，也不再需要上传语音模型文件系统
2. 板子集成PMU(Power management chip),具有短路和过载保护,默认情况下`PWRKEY`需要按压6秒才能关闭板子供电,按压`PWRKEY`128毫秒开启电源,如需要修改关机按压时间请参考`MinimalPowersExample`
3. 需要充电功能需要关闭`PMU` `TS Pin`检测功能,默认板载没有NTC传感器,所以需要禁用`TS Pin`检测才能正常使用充电功能,如果不关闭`TS Pin`检测功能,插入电池后PMU充电指示灯将会闪烁,此时充电将被禁用
4. 板子外部`5 Pin`扩展座子,5V是与`PMU` `SYS`共用，请不要外接大于600mA的外部供电负载，`3.3V`使用`PMU` `DCDC3` 供电,电压可以调节，最大输出电流请不要超过 `1A`
5. 显示屏与`ESP32S3`核心共用`DCDC1`电源通道,所以显示屏供电不可关闭,休眠时请将显示屏设置为休眠模式减少功耗
6. 板载的所有外设除了`OLED`之外其余的外设均可关闭供电
7. 当无法上传草图时,请按住板子上的`BOOT`按键,然后插入USB,此时你应该能在电脑的设备管理器中看到端口,然后再次点击上传草图
8. 当错误的关闭`ESP32S3`的供电通道时,请插入USB，然后按住板子的`BOOT`按键,再按住`PWRKEY`按键,此时板子进入下载模式,这时候可以正常上传草图
9. ⚠ **请在更改外设电压之前明白需要面临的风险,否则请不要尝试更改摄像头和其他板载设备的电压,可能会面临永久性的损坏**
10. 当你认为板子有问题时,你可以尝试烧录我们的出厂固件进行测试,可以先排除是否是硬件问题[FactoryFirmware](./firmware/README.MD)



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
| **Microphone** | **I2S WS / PDM L/R** | **DATA** | **CLK** |     |
|                | 42                   | 41       | 40      |     |

## Power Channel:

| PMU Channel | Microphone | OLED  | Camera            | Pir   |
| ----------- | ---------- | ----- | ----------------- | ----- |
|             | BLDO1      | DCDC1 | ALDO1/ALDO2/ALDO4 | ALDO3 |
