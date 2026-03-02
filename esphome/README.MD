# Build Logs

```bash
INFO ESPHome 2026.2.2
INFO Reading configuration /config/esp32-cam-s3.yaml...
INFO Generating C++ source...
INFO Compiling app... Build path: /config/.esphome/build/lilygo-esp32s3-camera-20260202
Processing lilygo-esp32s3-camera-20260202 (board: esp32s3box; framework: arduino, espidf; platform: https://github.com/pioarduino/platform-espressif32/releases/download/55.03.37/platform-espressif32.zip)
--------------------------------------------------------------------------------
HARDWARE: ESP32S3 240MHz, 320KB RAM, 4MB Flash
 - contrib-piohome @ 3.4.4 
 - framework-arduinoespressif32 @ 3.3.7 
 - framework-arduinoespressif32-libs @ 5.5.2 
 - framework-espidf @ 3.50502.0 (5.5.2) 
 - tool-cmake @ 4.0.3 
 - tool-esp-rom-elfs @ 2024.10.11 
 - tool-esptoolpy @ 5.1.2 
 - tool-ninja @ 1.13.1 
 - tool-scons @ 4.40801.0 (4.8.1) 
 - toolchain-xtensa-esp-elf @ 14.2.0+20251107
Reading CMake configuration...
Generating assembly for certificate bundle...
No dependencies
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/binary_sensor/automation.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/binary_sensor/binary_sensor.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/binary_sensor/filter.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/camera/buffer_impl.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/camera/camera.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/display/display.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/display/display_buffer.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/display/rect.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/esp32/core.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/esp32/gpio.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/esp32/helpers.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/esp32/preferences.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/esp32/throw_stubs.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/esp32_camera/esp32_camera.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/esp32_camera_web_server/camera_web_server.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/gpio/binary_sensor/gpio_binary_sensor.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/i2c/i2c.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/i2c/i2c_bus_esp_idf.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/logger/logger.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/logger/logger_esp32.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/logger/task_log_buffer_esp32.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/logger/task_log_buffer_zephyr.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/mdns/mdns_component.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/mdns/mdns_esp32.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/network/util.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/psram/psram.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/socket/bsd_sockets_impl.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/socket/socket.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/ssd1306_base/ssd1306_base.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/ssd1306_i2c/ssd1306_i2c.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/wifi/wifi_component.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/components/wifi/wifi_component_esp_idf.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/application.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/color.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/component.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/component_iterator.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/controller_registry.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/entity_base.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/gpio.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/helpers.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/log.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/ring_buffer.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/scheduler.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/time.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/esphome/core/util.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/src/main.cpp.o
Generating LD script .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_system/ld/memory.ld.in
Generating LD script .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_system/ld/sections.ld.in
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/app_trace/app_trace.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/app_trace/app_trace_util.c.o
Generating LD script .pioenvs/lilygo-esp32s3-camera-20260202/memory.ld
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/app_trace/host_file_io.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/app_trace/port/port_uart.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/app_update/esp_ota_ops.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/app_update/esp_ota_app_desc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_common.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/app_trace/libapp_trace.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/app_trace/libapp_trace.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_common_loader.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_clock_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_mem.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/app_update/libapp_update.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/app_update/libapp_update.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_random.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_efuse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/flash_encrypt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/secure_boot.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_random_esp32s3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/bootloader_flash/src/bootloader_flash.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/bootloader_flash/src/flash_qio_mode.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/bootloader_flash/src/bootloader_flash_config_esp32s3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_utility.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/flash_partitions.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/esp_image_format.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/bootloader_sha.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader_support/src/esp32s3/secure_boot_secure_features.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/commands.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/esp_console_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/esp_console_repl_internal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/split_argv.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/bootloader_support/libbootloader_support.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/bootloader_support/libbootloader_support.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/linenoise/linenoise.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/esp_console_repl_chip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_cmd.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_date.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_dbl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_dstr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_end.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_file.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_hashtable.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_int.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_lit.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_rem.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_rex.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_str.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/arg_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/console/argtable3/argtable3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/cxx/cxx_exception_stubs.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/cxx/cxx_guards.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/cxx/cxx_init.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/adc_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/adc_dma_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/timer_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/i2c/i2c.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/i2s_legacy.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/console/libconsole.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/console/libconsole.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/mcpwm_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/pcnt_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/rmt_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/sigma_delta_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/deprecated/rtc_temperature_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/touch_sensor/touch_sensor_common.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/cxx/libcxx.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/touch_sensor/esp32s3/touch_sensor.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/cxx/libcxx.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/driver/twai/twai.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/esp32s3/esp_efuse_table.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/esp32s3/esp_efuse_fields.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/esp32s3/esp_efuse_rtc_calib.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/esp32s3/esp_efuse_utility.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/src/esp_efuse_api.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/src/esp_efuse_fields.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/src/esp_efuse_utility.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/src/efuse_controller/keys/with_key_purposes/esp_efuse_api_key.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/efuse/src/esp_efuse_startup.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp-tls/esp_tls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp-tls/esp-tls-crypto/esp_tls_crypto.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp-tls/esp_tls_error_capture.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp-tls/esp_tls_platform_port.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp-tls/esp_tls_mbedtls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/adc_oneshot.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/driver/libdriver.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/adc_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/adc_cali.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/adc_cali_curve_fitting.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/driver/libdriver.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/deprecated/esp_adc_cal_common_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/adc_continuous.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/adc_monitor.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/efuse/libefuse.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/efuse/libefuse.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/gdma/adc_dma.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/adc_filter.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/esp32s3/curve_fitting_coefficients.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_adc/deprecated/esp32s3/esp_adc_cal_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_app_format/esp_app_desc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_bootloader_format/esp_bootloader_desc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_coex/esp32s3/esp_coex_adapter.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_coex/src/coexist_debug_diagram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_coex/src/coexist_debug.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_common/src/esp_err_to_name.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_cam/esp_cam_ctlr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_cam/dvp_share_ctrl.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_app_format/libesp_app_format.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_app_format/libesp_app_format.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_cam/dvp/src/esp_cam_ctlr_dvp_gdma.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_cam/dvp/src/esp_cam_ctlr_dvp_cam.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_bootloader_format/libesp_bootloader_format.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_bootloader_format/libesp_bootloader_format.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_gpio/src/gpio.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_gpio/src/gpio_glitch_filter_ops.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_gpio/src/rtc_io.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_adc/libesp_adc.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_adc/libesp_adc.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_gpio/src/dedic_gpio.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_gpio/src/gpio_pin_glitch_filter.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_gptimer/src/gptimer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_gptimer/src/gptimer_common.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp-tls/libesp-tls.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp-tls/libesp-tls.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2c/i2c_master.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_coex/libesp_coex.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2c/i2c_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2c/i2c_slave.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_coex/libesp_coex.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2s/i2s_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2s/i2s_std.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_cam/libesp_driver_cam.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_cam/libesp_driver_cam.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2s/i2s_pdm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2s/i2s_tdm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_i2s/i2s_platform.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_gpio/libesp_driver_gpio.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_gpio/libesp_driver_gpio.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_ledc/src/ledc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_cap.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_gptimer/libesp_driver_gptimer.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_gptimer/libesp_driver_gptimer.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_cmpr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_com.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_fault.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_i2c/libesp_driver_i2c.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_gen.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_i2c/libesp_driver_i2c.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_oper.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_sync.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_mcpwm/src/mcpwm_timer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_pcnt/src/pulse_cnt.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_i2s/libesp_driver_i2s.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_i2s/libesp_driver_i2s.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_rmt/src/rmt_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_rmt/src/rmt_encoder.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_rmt/src/rmt_encoder_bytes.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_ledc/libesp_driver_ledc.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_ledc/libesp_driver_ledc.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_rmt/src/rmt_encoder_copy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_rmt/src/rmt_encoder_simple.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_rmt/src/rmt_rx.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_rmt/src/rmt_tx.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_sdm/src/sdm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_sdmmc/src/sdmmc_transaction.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_mcpwm/libesp_driver_mcpwm.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_mcpwm/libesp_driver_mcpwm.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_sdmmc/src/sdmmc_host.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_common/libesp_common.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_pcnt/libesp_driver_pcnt.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_common/libesp_common.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_pcnt/libesp_driver_pcnt.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_sdspi/src/sdspi_crc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_sdspi/src/sdspi_host.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_sdspi/src/sdspi_transaction.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_spi/src/gpspi/spi_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_spi/src/gpspi/spi_master.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_spi/src/gpspi/spi_slave.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_spi/src/gpspi/spi_slave_hd.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_touch_sens/common/touch_sens_common.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_sdm/libesp_driver_sdm.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_sdm/libesp_driver_sdm.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_touch_sens/hw_ver2/touch_version_specific.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_tsens/src/temperature_sensor.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_rmt/libesp_driver_rmt.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_rmt/libesp_driver_rmt.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_twai/esp_twai.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_twai/esp_twai_onchip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_uart/src/uart.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_sdspi/libesp_driver_sdspi.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_sdmmc/libesp_driver_sdmmc.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_sdmmc/libesp_driver_sdmmc.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_sdspi/libesp_driver_sdspi.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_uart/src/uart_wakeup.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_uart/src/uhci.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_uart/src/uart_vfs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_usb_serial_jtag/src/usb_serial_jtag.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_usb_serial_jtag/src/usb_serial_jtag_connection_monitor.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_driver_usb_serial_jtag/src/usb_serial_jtag_vfs.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_spi/libesp_driver_spi.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_spi/libesp_driver_spi.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_eth/src/esp_eth.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_touch_sens/libesp_driver_touch_sens.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_touch_sens/libesp_driver_touch_sens.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_eth/src/phy/esp_eth_phy_802_3.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_tsens/libesp_driver_tsens.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_tsens/libesp_driver_tsens.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_eth/src/esp_eth_netif_glue.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_event/default_event_loop.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_event/esp_event.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_twai/libesp_driver_twai.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_twai/libesp_driver_twai.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_event/esp_event_private.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_gdbstub/src/gdbstub.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_gdbstub/src/gdbstub_transport.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_gdbstub/src/packet.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_gdbstub/src/port/xtensa/gdbstub_xtensa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_gdbstub/src/port/xtensa/gdbstub-entry.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_gdbstub/src/port/xtensa/xt_debugexception.S.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_uart/libesp_driver_uart.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_uart/libesp_driver_uart.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hid/src/esp_hidd.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_eth/libesp_eth.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_eth/libesp_eth.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hid/src/esp_hidh.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hid/src/esp_hid_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_client/esp_http_client.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_usb_serial_jtag/libesp_driver_usb_serial_jtag.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_client/lib/http_auth.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_client/lib/http_header.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_driver_usb_serial_jtag/libesp_driver_usb_serial_jtag.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_client/lib/http_utils.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_event/libesp_event.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_event/libesp_event.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_server/src/httpd_main.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_server/src/httpd_parse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_server/src/httpd_sess.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_server/src/httpd_txrx.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_server/src/httpd_uri.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_gdbstub/libesp_gdbstub.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_gdbstub/libesp_gdbstub.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_server/src/httpd_ws.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_http_server/src/util/ctrl_sock.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_https_ota/src/esp_https_ota.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_hid/libesp_hid.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/cpu.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_hid/libesp_hid.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/esp_cpu_intr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/esp_memory_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/cpu_region_protect.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/esp_clk.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/clk_ctrl_os.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/hw_random.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/intr_alloc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/mac_addr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/periph_ctrl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/revision.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/rtc_module.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/regi2c_ctrl.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_http_client/libesp_http_client.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/esp_gpio_reserve.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_http_client/libesp_http_client.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_http_server/libesp_http_server.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_https_ota/libesp_https_ota.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sar_periph_ctrl_common.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_https_ota/libesp_https_ota.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_http_server/libesp_http_server.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/io_mux.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/esp_clk_tree.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/dma/esp_dma_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/dma/gdma_link.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/spi_bus_lock.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/clk_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp_clk_tree_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/spi_share_hw_ctrl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/adc_share_hw_ctrl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_modem.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_modes.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_console.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_mspi.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_usb.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_gpio.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_event.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/dma/gdma.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/deprecated/gdma_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/dma/esp_async_memcpy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/dma/async_memcpy_gdma.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/systimer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/mspi_timing_tuning/mspi_timing_tuning.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/sleep_wake_stub.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/esp_clock_output.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/power_supply/brownout.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/rtc_clk.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/rtc_clk_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/rtc_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/rtc_sleep.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/rtc_time.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/chip_info.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/sar_periph_ctrl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp32s3/esp_memprot.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/port/esp_memprot_conv.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/mspi_timing_tuning/port/esp32s3/mspi_timing_config.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/mspi_timing_tuning/port/esp32s3/mspi_timing_by_mspi_delay.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_hw_support/lowpower/port/esp32s3/sleep_cpu.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/src/esp_lcd_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/src/esp_lcd_panel_io.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/src/esp_lcd_panel_nt35510.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/src/esp_lcd_panel_ssd1306.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/src/esp_lcd_panel_st7789.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/src/esp_lcd_panel_ops.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/i2c/esp_lcd_panel_io_i2c_v1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/i2c/esp_lcd_panel_io_i2c_v2.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/spi/esp_lcd_panel_io_spi.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/i80/esp_lcd_panel_io_i80.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_lcd/rgb/esp_lcd_panel_rgb.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_mm/esp_mmu_map.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_hw_support/libesp_hw_support.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_mm/port/esp32s3/ext_mem_layout.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_mm/esp_cache_msync.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_hw_support/libesp_hw_support.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_mm/esp_cache_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_mm/heap_align_hw.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/esp_netif_handlers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/esp_netif_objects.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/esp_netif_defaults.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/lwip/esp_netif_lwip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/lwip/esp_netif_sntp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/lwip/esp_netif_lwip_defaults.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/lwip/netif/wlanif.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/lwip/netif/ethernetif.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_netif/lwip/netif/esp_pbuf_ref.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_partition/partition.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_partition/partition_target.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_mm/libesp_mm.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_mm/libesp_mm.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_phy/src/phy_override.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_phy/src/lib_printf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_phy/src/phy_common.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_lcd/libesp_lcd.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_lcd/libesp_lcd.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_phy/src/phy_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_phy/esp32s3/phy_init_data.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_phy/src/btbb_init.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_partition/libesp_partition.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_partition/libesp_partition.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_pm/pm_locks.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_pm/pm_trace.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_pm/pm_impl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_psram/system_layer/esp_psram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_psram/esp32s3/esp_psram_impl_octal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_psram/xip_impl/mmu_psram_flash.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_ringbuf/ringbuf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_sys.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_print.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_netif/libesp_netif.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_netif/libesp_netif.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_crc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_uart.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_spiflash.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_efuse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_gpio.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_longjmp.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_systimer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_wdt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_cache_esp32s2_esp32s3.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_ringbuf/libesp_ringbuf.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_ringbuf/libesp_ringbuf.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_rom/patches/esp_rom_cache_writeback_esp32s3.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_security/src/init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_security/src/esp_hmac.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_phy/libesp_phy.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_security/src/esp_ds.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_security/src/esp_crypto_lock.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_phy/libesp_phy.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_security/src/esp_crypto_periph_clk.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_psram/libesp_psram.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/esp_err.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_psram/libesp_psram.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/crosscore_int.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/esp_ipc.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_pm/libesp_pm.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/esp_system_console.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_pm/libesp_pm.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/freertos_hooks.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/int_wdt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/panic.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_rom/libesp_rom.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_rom/libesp_rom.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/esp_system.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/startup.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/startup_funcs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/system_time.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/stack_check.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/ubsan.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/xt_wdt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/task_wdt/task_wdt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/task_wdt/task_wdt_impl_timergroup.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_security/libesp_security.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_security/libesp_security.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/cpu_start.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/panic_handler.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/esp_system_chip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/image_process.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/esp_ipc_isr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/esp_ipc_isr_port.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/esp_ipc_isr_handler.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/esp_ipc_isr_routines.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/panic_arch.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/panic_handler_asm.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/expression_with_stack.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/expression_with_stack_asm.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/debug_helpers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/debug_helpers_asm.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/debug_stubs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/arch/xtensa/trax.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/soc/esp32s3/highint_hdl.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/soc/esp32s3/clk.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/soc/esp32s3/reset_reason.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/soc/esp32s3/system_internal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/soc/esp32s3/cache_err_int.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_system/port/soc/esp32s3/apb_backup_dma.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_timer/src/esp_timer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_timer/src/esp_timer_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_timer/src/ets_timer_legacy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_timer/src/system_time.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_timer/src/esp_timer_impl_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_timer/src/esp_timer_impl_systimer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_vfs_console/vfs_console.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/lib_printf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/mesh_event.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/smartconfig.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/wifi_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/wifi_default.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/wifi_netif.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/wifi_default_ap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/esp32s3/esp_adapter.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/regulatory/esp_wifi_regulatory.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp_wifi/src/smartconfig_ack.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_system/libesp_system.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_system/libesp_system.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_timer/libesp_timer.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_timer/libesp_timer.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/conversions/yuv.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/conversions/to_jpg.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/conversions/to_bmp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/conversions/jpge.cpp.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_vfs_console/libesp_vfs_console.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_vfs_console/libesp_vfs_console.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/driver/esp_camera.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/driver/cam_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/driver/sensor.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/ov2640.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/ov3660.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/ov5640.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/ov7725.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/ov7670.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/nt99141.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/gc0308.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/gc2145.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_wifi/libesp_wifi.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/esp_wifi/libesp_wifi.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/gc032a.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/bf3005.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/bf20a6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/sc101iot.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/sc030iot.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/sc031gs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/mega_ccm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/hm1055.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/sensors/hm0360.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/target/esp32s3/ll_cam.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp32-camera/driver/sccb-ng.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__esp_jpeg/jpeg_decoder.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__mdns/mdns.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__mdns/mdns_mem_caps.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__mdns/mdns_networking_lwip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/managed_components/espressif__mdns/mdns_console.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/diskio/diskio.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/diskio/diskio_rawflash.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/espressif__esp_jpeg/libespressif__esp_jpeg.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/espressif__esp_jpeg/libespressif__esp_jpeg.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/diskio/diskio_wl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/src/ff.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/src/ffunicode.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/port/freertos/ffsystem.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/diskio/diskio_sdmmc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/vfs/vfs_fat.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/espressif__esp32-camera/libespressif__esp32-camera.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/vfs/vfs_fat_sdmmc.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/espressif__esp32-camera/libespressif__esp32-camera.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/fatfs/vfs/vfs_fat_spiflash.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/base64.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/cbuf.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/ColorFormat.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/chip-debug-report.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-adc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-bt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-cpu.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-dac.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-gpio.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/espressif__mdns/libespressif__mdns.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/espressif__mdns/libespressif__mdns.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-hosted.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-i2c.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-i2c-ng.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-i2c-slave.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-ledc.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/fatfs/libfatfs.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/fatfs/libfatfs.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-log-wrapper.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-matrix.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-misc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-periman.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-psram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-rgb-led.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-sigmadelta.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-spi.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-time.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-timer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-tinyusb.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-touch.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-touch-ng.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-uart.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/esp32-hal-rmt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/Esp.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos_stats.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/FunctionalInterrupt.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/HardwareSerial.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/HashBuilder.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/HEXBuilder.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/idf_openthread_mpool_wrapper.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/IPAddress.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/cdecode.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/cencode.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/MacAddress.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/main.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/MD5Builder.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/Print.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/stdlib_noniso.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/Stream.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/StreamString.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/Tone.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/HWCDC.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/USB.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/USBCDC.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/USBMSC.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/FirmwareMSC.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/firmware_msc_fat.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wiring_pulse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wiring_shift.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/WMath.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/WString.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/heap_idf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/app_startup.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/port_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/port_systick.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/list.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/queue.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/tasks.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/timers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/event_groups.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/stream_buffer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/portable/xtensa/port.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/portable/xtensa/portasm.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/portable/xtensa/xtensa_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/FreeRTOS-Kernel/portable/xtensa/xtensa_overlay_os_hook.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/esp_additions/freertos_compatibility.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/esp_additions/idf_additions_event_groups.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/freertos/esp_additions/idf_additions.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/hal_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/mpu_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/efuse_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/esp32s3/efuse_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/mmu_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/cache_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/color_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_flash_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_flash_hal_iram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_flash_encrypt_hal_iram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/esp32s3/clk_tree_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/systimer_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/uart_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/uart_hal_iram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/gpio_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/rtc_io_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/timer_hal.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/freertos/libfreertos.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/freertos/libfreertos.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/ledc_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/ledc_hal_iram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/i2c_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/i2c_hal_iram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/rmt_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/pcnt_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/mcpwm_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/uhci_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/twai_hal_v1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/gdma_hal_top.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/gdma_hal_ahb_v1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/i2s_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/sdm_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/sdmmc_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/adc_hal_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/adc_oneshot_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/adc_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/lcd_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/mpi_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/sha_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/aes_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/brownout_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_hal_iram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_slave_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_slave_hal_iram.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_slave_hd_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/spi_flash_hal_gpspi.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/hmac_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/ds_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/cam_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/usb_serial_jtag_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/usb_dwc_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/usb_wrap_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/esp32s3/touch_sensor_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/touch_sensor_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/touch_sens_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/xt_wdt_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/hal/esp32s3/rtc_cntl_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/heap/heap_caps_base.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/heap/heap_caps.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/heap/heap_caps_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/heap/multi_heap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/heap/tlsf/tlsf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/heap/port/memory_layout_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/heap/port/esp32s3/memory_layout.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/http_parser/http_parser.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/json/cJSON/cJSON.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/json/cJSON/cJSON_Utils.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/hal/libhal.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/os/log_timestamp.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/hal/libhal.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/log_timestamp_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/os/log_lock.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/buffer/log_buffers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/os/util.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/util.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/log_format_text.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/log_print.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/json/libjson.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/json/libjson.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/log.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/http_parser/libhttp_parser.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/http_parser/libhttp_parser.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/heap/libheap.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/os/log_write.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/heap/libheap.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/log_level/log_level.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/log/src/log_level/tag_log_level/tag_log_level.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/framework-arduinoespressif32/libframework-arduinoespressif32.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/apps/sntp/sntp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/api_lib.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/api_msg.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/err.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/if_api.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/framework-arduinoespressif32/libframework-arduinoespressif32.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/netbuf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/netdb.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/netifapi.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/sockets.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/api/tcpip.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/log/liblog.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/apps/sntp/sntp.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/log/liblog.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/apps/netbiosns/netbiosns.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/def.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/dns.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/inet_chksum.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/mem.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/memp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/netif.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/pbuf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/raw.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/stats.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/sys.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/tcp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/tcp_in.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/tcp_out.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/timeouts.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/udp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/autoip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/dhcp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/etharp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/icmp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/igmp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/ip4.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/ip4_napt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/ip4_addr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv4/ip4_frag.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/dhcp6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/ethip6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/icmp6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/inet6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/ip6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/ip6_addr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/ip6_frag.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/mld6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/core/ipv6/nd6.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ethernet.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/bridgeif.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/bridgeif_fdb.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/slipif.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/auth.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/ccp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/chap-md5.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/chap-new.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/chap_ms.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/demand.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/eap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/ecp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/eui64.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/fsm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/ipcp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/ipv6cp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/lcp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/magic.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/mppe.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/multilink.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/ppp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/pppapi.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/pppcrypt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/pppoe.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/pppol2tp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/pppos.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/upap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/vj.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/hooks/tcp_isn_default.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/hooks/lwip_default_hooks.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/debug/lwip_debug.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/sockets_ext.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/freertos/sys_arch.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/if_index.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/acd_dhcp_check.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/port/esp32xx/vfs_lwip.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/apps/ping/esp_ping.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/apps/ping/ping.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/apps/ping/ping_sock.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/polarssl/arc4.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/polarssl/des.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/polarssl/md4.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/polarssl/md5.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/lwip/src/netif/ppp/polarssl/sha1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/lwip/apps/dhcpserver/dhcpserver.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/esp_crt_bundle/esp_crt_bundle.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/.pioenvs/lilygo-esp32s3-camera-20260202/x509_crt_bundle.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/abort.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/assert.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/heap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/locks.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/poll.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/pthread.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/random.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/getentropy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/termios.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/stdatomic.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/time.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/libmbedtls.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/libmbedtls.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/sysconf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/realpath.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/lwip/liblwip.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/scandir.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/syscalls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/reent_syscalls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/port/esp_time_impl.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/lwip/liblwip.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/port/xtensa/stdatomic_s32c1i.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/flockfile.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/reent_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/newlib/src/newlib_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_api.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_cxx_api.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_item_hash_list.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_page.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_pagemanager.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_storage.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_handle_simple.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_handle_locked.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_partition.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_partition_lookup.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_partition_manager.cpp.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/newlib/libnewlib.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/newlib/libnewlib.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_types.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_platform.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_bootloader.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_encrypted_partition.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_bootloader_aes.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_flash/src/nvs_bootloader_xts_aes.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/nvs_sec_provider/nvs_sec_provider.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/protobuf-c/protobuf-c/protobuf-c/protobuf-c.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/pthread/pthread.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/pthread/pthread_cond_var.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/pthread/pthread_local_storage.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/pthread/pthread_rwlock.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/pthread/pthread_semaphore.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/rt/FreeRTOS_POSIX_mqueue.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/rt/FreeRTOS_POSIX_utils.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/protobuf-c/libprotobuf-c.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/protobuf-c/libprotobuf-c.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/sdmmc/sdmmc_cmd.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/nvs_sec_provider/libnvs_sec_provider.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/sdmmc/sdmmc_common.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/nvs_sec_provider/libnvs_sec_provider.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/sdmmc/sdmmc_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/sdmmc/sdmmc_io.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/sdmmc/sdmmc_mmc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/sdmmc/sdmmc_sd.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/sdmmc/sd_pwr_ctrl/sd_pwr_ctrl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/lldesc.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/pthread/libpthread.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/pthread/libpthread.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/dport_access_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/interrupts.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/gpio_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/uart_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/adc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/dedic_gpio_periph.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/rt/librt.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/rt/librt.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/gdma_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/spi_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/ledc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/pcnt_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/rmt_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/sdm_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/i2s_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/i2c_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/temperature_sensor_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/timer_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/lcd_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/mcpwm_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/mpi_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/sdmmc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/touch_sensor_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/twai_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/wdt_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/usb_dwc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/rtc_io_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/cam_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/soc/esp32s3/power_supply_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/flash_brownout_hook.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/sdmmc/libsdmmc.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/esp32s3/spi_flash_oct_flash_init.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/sdmmc/libsdmmc.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_hpm_enable.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_drivers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_generic.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_issi.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_mxic.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_gd.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_winbond.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_boya.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_mxic_opi.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/soc/libsoc.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/soc/libsoc.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_chip_th.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/memspi_host_driver.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/cache_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/flash_mmap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/flash_ops.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_wrap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/esp_flash_api.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/esp_flash_spi_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_os_func_app.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spi_flash/spi_flash_os_func_noos.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spiffs/spiffs_api.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spiffs/spiffs/src/spiffs_cache.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/nvs_flash/libnvs_flash.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/nvs_flash/libnvs_flash.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spiffs/spiffs/src/spiffs_check.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spiffs/spiffs/src/spiffs_gc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spiffs/spiffs/src/spiffs_hydrogen.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spiffs/spiffs/src/spiffs_nucleus.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/spiffs/esp_spiffs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/tcp_transport/transport.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/tcp_transport/transport_ssl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/tcp_transport/transport_internal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/tcp_transport/transport_socks_proxy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/tcp_transport/transport_ws.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/touch_element/touch_element.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/touch_element/touch_button.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/spi_flash/libspi_flash.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/touch_element/touch_slider.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/spi_flash/libspi_flash.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/touch_element/touch_matrix.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/hcd_dwc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/enum.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/spiffs/libspiffs.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/spiffs/libspiffs.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/hub.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/usb_helpers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/usb_host.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/usb_private.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/usbh.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/usb/usb_phy.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/touch_element/libtouch_element.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/touch_element/libtouch_element.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/vfs/vfs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/vfs/vfs_eventfd.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/vfs/vfs_semihost.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/vfs/nullfs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wear_levelling/Partition.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wear_levelling/SPI_Flash.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wear_levelling/WL_Ext_Perf.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wear_levelling/WL_Ext_Safe.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wear_levelling/WL_Flash.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wear_levelling/crc32.cpp.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/usb/libusb.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/tcp_transport/libtcp_transport.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/usb/libusb.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/tcp_transport/libtcp_transport.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wear_levelling/wear_levelling.cpp.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/port/os_xtensa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/port/eloop.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/ap_config.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/ieee802_1x.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/wpa_auth.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/wpa_auth_ie.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/pmksa_cache_auth.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/sta_info.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/ieee802_11.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/ap/comeback_token.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/vfs/libvfs.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/vfs/libvfs.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/common/sae.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/wear_levelling/libwear_levelling.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/wear_levelling/libwear_levelling.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/common/dragonfly.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/common/wpa_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/bitfield.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/aes-siv.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha256-kdf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/ccmp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/aes-gcm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/crypto_ops.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/dh_group5.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/dh_groups.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/ms_funcs.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha1-tlsprf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha256-tlsprf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha384-tlsprf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha256-prf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha1-prf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha384-prf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/md4-internal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/sha1-tprf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_common/eap_wsc_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/common/ieee802_11_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/chap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_mschapv2.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_peap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_peap_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_tls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_tls_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_ttls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/mschapv2.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_fast.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_fast_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/eap_peer/eap_fast_pac.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/rsn_supp/pmksa_cache.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/rsn_supp/wpa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/rsn_supp/wpa_ie.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/base64.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/ext_password.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/uuid.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/wpabuf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/wpa_debug.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/utils/json.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/wps/wps.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/wps/wps_attr_build.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/wps/wps_attr_parse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/wps/wps_attr_process.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/wps/wps_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/wps/wps_dev_attr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/wps/wps_enrollee.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/common/sae_pk.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_eap_client.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_wpa2_api_port.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_wpa_main.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_wpas_glue.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_wps.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_wpa3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_owe.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/esp_hostap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/asn1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/bignum.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/pkcs1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/pkcs5.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/pkcs8.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/rsa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/tls_internal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/tlsv1_client.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/tlsv1_client_read.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/tlsv1_client_write.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/tlsv1_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/tlsv1_cred.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/tlsv1_record.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/tlsv1_client_ocsp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/tls/x509v3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/crypto/crypto_mbedtls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/crypto/crypto_mbedtls-bignum.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/crypto/crypto_mbedtls-rsa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/crypto/crypto_mbedtls-ec.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/crypto/fastpsk.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/rc4.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/des-internal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/esp_supplicant/src/crypto/fastpbkdf2.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/aes-wrap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/aes-unwrap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/wpa_supplicant/src/crypto/aes-ccm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/xtensa/eri.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/xtensa/xt_trax.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/xtensa/xtensa_context.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/xtensa/xtensa_intr_asm.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/xtensa/xtensa_intr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/xtensa/xtensa_vectors.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/3rdparty/everest/library/everest.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/3rdparty/everest/library/x25519.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/3rdparty/everest/library/Hacl_Curve25519_joined.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/aes.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/xtensa/libxtensa.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/xtensa/libxtensa.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/aesni.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/aesce.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/aria.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/asn1parse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/asn1write.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/base64.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/bignum.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/bignum_core.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/bignum_mod.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/wpa_supplicant/libwpa_supplicant.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/3rdparty/everest/libeverest.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/3rdparty/everest/libeverest.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/bignum_mod_raw.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/block_cipher.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/camellia.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ccm.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/wpa_supplicant/libwpa_supplicant.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/chacha20.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/chachapoly.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/cipher.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/cipher_wrap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/constant_time.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/cmac.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ctr_drbg.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/des.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/dhm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ecdh.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ecdsa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ecjpake.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ecp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ecp_curves.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ecp_curves_new.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/entropy.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/entropy_poll.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/error.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/gcm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/hkdf.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/hmac_drbg.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/lmots.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/lms.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/md.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/md5.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/memory_buffer_alloc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/nist_kw.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/oid.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/padlock.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pem.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pk.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pk_ecc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pk_wrap.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pkcs12.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pkcs5.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pkparse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pkwrite.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/platform.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/platform_util.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/poly1305.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_aead.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_cipher.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_client.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_driver_wrappers_no_static.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_ecp.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_ffdh.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_hash.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_mac.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_pake.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_rsa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_se.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_slot_management.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_crypto_storage.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_its_file.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/psa_util.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ripemd160.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/rsa.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/rsa_alt_helpers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/sha1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/sha256.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/sha512.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/sha3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/threading.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/timing.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/version.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/version_features.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/sha/core/esp_sha_gdma_impl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/aes/dma/esp_aes_gdma_impl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/aes/dma/esp_aes_dma_core.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/crypto_shared_gdma/esp_crypto_shared_gdma.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_hardware.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_mem.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_timing.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/aes/esp_aes_xts.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/aes/esp_aes_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/aes/dma/esp_aes.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/sha/esp_sha.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/sha/core/sha.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_ds/esp_rsa_sign_alt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_ds/esp_rsa_dec_alt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_ds/esp_ds_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_hmac_pbkdf2.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/bignum/esp_bignum.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/bignum/bignum_alt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/sha/core/esp_sha1.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/sha/core/esp_sha256.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/sha/core/esp_sha512.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/aes/esp_aes_gcm.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/md/esp_md.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/debug.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/mps_reader.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/mps_trace.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_cache.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_ciphersuites.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_client.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_cookie.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_debug_helpers_generated.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_msg.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_ticket.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_tls.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_tls12_client.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_tls12_server.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_tls13_keys.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/library/libmbedcrypto.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/library/libmbedcrypto.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_tls13_server.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_tls13_client.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/ssl_tls13_generic.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/mbedtls_debug.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/esp_platform_time.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/port/net_sockets.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/pkcs7.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509_create.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509_crl.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509_crt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509_csr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509write.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509write_crt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/library/x509write_csr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/3rdparty/p256-m/p256-m_driver_entrypoints.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/mbedtls/mbedtls/3rdparty/p256-m/p256-m/p256-m.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/xtensa/eri.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/xtensa/xt_trax.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader/subproject/main/bootloader_start.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_common_loader.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_clock_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_mem.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_random.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_efuse.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/xtensa/libxtensa.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/xtensa/libxtensa.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/flash_encrypt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/secure_boot.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/main/libmain.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/main/libmain.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_random_esp32s3.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/3rdparty/p256-m/libp256m.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/3rdparty/p256-m/libp256m.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/bootloader_flash/src/bootloader_flash.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/bootloader_flash/src/flash_qio_mode.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/bootloader_flash/src/bootloader_flash_config_esp32s3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_utility.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/flash_partitions.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/library/libmbedtls.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/esp_image_format.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_sha.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_clock_loader.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/library/libmbedtls.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_console.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_console_loader.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/esp32s3/bootloader_soc.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/library/libmbedx509.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/esp-idf/mbedtls/mbedtls/library/libmbedx509.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/esp32s3/bootloader_esp32s3.c.o
Generating project linker script .pioenvs/lilygo-esp32s3-camera-20260202/sections.ld
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader_support/src/bootloader_panic.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/esp32s3/esp_efuse_table.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/esp32s3/esp_efuse_fields.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/esp32s3/esp_efuse_rtc_calib.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/esp32s3/esp_efuse_utility.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/src/esp_efuse_api.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/src/esp_efuse_fields.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/src/esp_efuse_utility.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/efuse/src/efuse_controller/keys/with_key_purposes/esp_efuse_api_key.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_bootloader_format/esp_bootloader_desc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_common/src/esp_err_to_name.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/cpu.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/esp_cpu_intr.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/esp_memory_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/cpu_region_protect.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/rtc_clk.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/rtc_clk_init.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_bootloader_format/libesp_bootloader_format.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_bootloader_format/libesp_bootloader_format.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/rtc_init.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/rtc_sleep.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/rtc_time.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_hw_support/port/esp32s3/chip_info.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_sys.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_print.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/efuse/libefuse.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/bootloader_support/libbootloader_support.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/efuse/libefuse.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_crc.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_common/libesp_common.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_common/libesp_common.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/bootloader_support/libbootloader_support.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_uart.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_spiflash.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_efuse.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_gpio.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_longjmp.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_systimer.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_wdt.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_cache_esp32s2_esp32s3.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_rom/patches/esp_rom_cache_writeback_esp32s3.S.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp_system/esp_err.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/hal/hal_utils.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/hal/mpu_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/hal/efuse_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/hal/esp32s3/efuse_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/hal/mmu_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/hal/cache_hal.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/noos/log_timestamp.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_hw_support/libesp_hw_support.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/log_timestamp_common.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_hw_support/libesp_hw_support.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/noos/log_lock.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/buffer/log_buffers.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/noos/util.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_rom/libesp_rom.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_system/libesp_system.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_system/libesp_system.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/util.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/esp_rom/libesp_rom.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/log_format_text.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/log_print.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/log/src/log.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/bootloader/subproject/components/micro-ecc/uECC_verify_antifault.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/hal/libhal.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/lldesc.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/dport_access_common.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/interrupts.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/gpio_periph.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/hal/libhal.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/uart_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/adc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/dedic_gpio_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/gdma_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/spi_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/ledc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/pcnt_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/rmt_periph.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/micro-ecc/libmicro-ecc.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/sdm_periph.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/micro-ecc/libmicro-ecc.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/i2s_periph.c.o
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/log/liblog.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/i2c_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/temperature_sensor_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/timer_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/lcd_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/mcpwm_periph.c.o
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/log/liblog.a
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/mpi_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/sdmmc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/touch_sensor_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/twai_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/wdt_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/usb_dwc_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/rtc_io_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/cam_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/soc/esp32s3/power_supply_periph.c.o
Compiling .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/spi_flash/spi_flash_wrap.c.o
Generating partitions .pioenvs/lilygo-esp32s3-camera-20260202/partitions.bin
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/soc/libsoc.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/soc/libsoc.a
Archiving .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/spi_flash/libspi_flash.a
Indexing .pioenvs/lilygo-esp32s3-camera-20260202/bootloader/esp-idf/spi_flash/libspi_flash.a
Linking .pioenvs/lilygo-esp32s3-camera-20260202/bootloader.elf
Building .pioenvs/lilygo-esp32s3-camera-20260202/bootloader.bin
Creating ESP32S3 image...
Successfully created ESP32S3 image.
Linking .pioenvs/lilygo-esp32s3-camera-20260202/firmware.elf
                            Memory Type Usage Summary                             
┏━━━━━━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━┳━━━━━━━━━━┳━━━━━━━━━━━━━━━━┳━━━━━━━━━━━━━━━┓
┃ Memory Type/Section ┃ Used [bytes] ┃ Used [%] ┃ Remain [bytes] ┃ Total [bytes] ┃
┡━━━━━━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━╇━━━━━━━━━━╇━━━━━━━━━━━━━━━━╇━━━━━━━━━━━━━━━┩
│ Flash Code          │       657548 │          │                │               │
│    .text            │       657548 │          │                │               │
│ Flash Data          │       125276 │          │                │               │
│    .rodata          │       125020 │          │                │               │
│    .appdesc         │          256 │          │                │               │
│ DIRAM               │       106939 │    31.29 │         234821 │        341760 │
│    .text            │        58143 │    17.01 │                │               │
│    .data            │        28164 │     8.24 │                │               │
│    .bss             │        20632 │     6.04 │                │               │
│ IRAM                │        16384 │    100.0 │              0 │         16384 │
│    .text            │        15356 │    93.73 │                │               │
│    .vectors         │         1028 │     6.27 │                │               │
└─────────────────────┴──────────────┴──────────┴────────────────┴───────────────┘
Total image size: 885515 bytes (.bin may be padded larger)
Note: The reported total sizes may be smaller than those in the technical reference manual due to reserved memory and application configuration. The total flash size available for the application is not included by default, as it cannot be reliably determined due to the presence of other data like the bootloader, partition table, and application partition size.
RAM:   [=         ]  14.9% (used 48796 bytes from 327680 bytes)
Flash: [=====     ]  48.2% (used 885259 bytes from 1835008 bytes)
Building .pioenvs/lilygo-esp32s3-camera-20260202/firmware.bin
Creating ESP32S3 image...
Successfully created ESP32S3 image.
merge_factory_bin([".pioenvs/lilygo-esp32s3-camera-20260202/firmware.bin"], [".pioenvs/lilygo-esp32s3-camera-20260202/firmware.elf"])
Info: bootloader.bin not found - skipping
Info: partition-table.bin not found - skipping
Info: ota_data_initial.bin not found - skipping
Info: lilygo-esp32s3-camera-20260202.bin not found - skipping
Using FLASH_EXTRA_IMAGES from PlatformIO environment
Merging binaries into /config/.esphome/build/lilygo-esp32s3-camera-20260202/.pioenvs/lilygo-esp32s3-camera-20260202/firmware.factory.bin
Merging binaries with esptool
SHA digest in image updated.
Wrote 0xe83a0 bytes to file '/config/.esphome/build/lilygo-esp32s3-camera-20260202/.pioenvs/lilygo-esp32s3-camera-20260202/firmware.factory.bin', ready to flash to offset 0x0.
Successfully created /config/.esphome/build/lilygo-esp32s3-camera-20260202/.pioenvs/lilygo-esp32s3-camera-20260202/firmware.factory.bin
esp32_copy_ota_bin([".pioenvs/lilygo-esp32s3-camera-20260202/firmware.bin"], [".pioenvs/lilygo-esp32s3-camera-20260202/firmware.elf"])
Copied firmware to /config/.esphome/build/lilygo-esp32s3-camera-20260202/.pioenvs/lilygo-esp32s3-camera-20260202/firmware.ota.bin
======================== [SUCCESS] Took 1114.68 seconds ========================
```


# Run log

```bash
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0xc (RTC_SW_CPU_RST),boot:0x8 (SPI_FAST_FLASH_BOOT)
Saved PC:0x4202d1fd
SPIWP:0xee
mode:DIO, clock div:1
load:0x3fce2820,len:0x15c8
load:0x403c8700,len:0xce4
load:0x403cb700,len:0x2f34
entry 0x403c8918
I (24) boot: ESP-IDF 5.5.2 2nd stage bootloader
I (24) boot: compile time Feb 28 2026 02:26:49
I (24) boot: Multicore bootloader
I (24) boot: chip revision: v0.2
I (24) boot: efuse block revision: v1.3
I (25) boot.esp32s3: Boot SPI Speed : 80MHz
I (25) boot.esp32s3: SPI Mode       : DIO
I (25) boot.esp32s3: SPI Flash Size : 4MB
I (25) boot: Enabling RNG early entropy source...
I (26) boot: Partition Table:
I (26) boot: ## Label            Usage          Type ST Offset   Length
I (26) boot:  0 nvs              WiFi data        01 02 00009000 00005000
I (27) boot:  1 otadata          OTA data         01 00 0000e000 00002000
I (27) boot:  2 app0             OTA app          00 10 00010000 001c0000
I (27) boot:  3 app1             OTA app          00 11 001d0000 001c0000
I (28) boot:  4 eeprom           Unknown data     01 99 00390000 00001000
I (28) boot:  5 spiffs           Unknown data     01 82 00391000 0000f000
I (29) boot: End of partition table
I (29) esp_image: segment 0: paddr=00010020 vaddr=3c0b0020 size=1e95ch (125276) map
I (52) esp_image: segment 1: paddr=0002e984 vaddr=3fc96400 size=01694h (  5780) load
I (53) esp_image: segment 2: paddr=00030020 vaddr=42000020 size=a088ch (657548) map
I (170) esp_image: segment 3: paddr=000d08b4 vaddr=3fc97a94 size=05770h ( 22384) load
I (175) esp_image: segment 4: paddr=000d602c vaddr=40374000 size=12320h ( 74528) load
I (191) esp_image: segment 5: paddr=000e8354 vaddr=50000000 size=00020h (    32) load
I (200) boot: Loaded app from partition at offset 0x10000
I (200) boot: Disabling RNG early entropy source...
[I][logger:118]: Log initialized
[I][app:091]: Running through setup()
[I][i2c.idf:206]: Performing bus recovery
[D][binary_sensor:044]: 'ttgocam2 PIR' >> ON
[C][component:278]: Setup esp32_camera took 207ms
[C][component:278]: Setup display took 124ms
[C][wifi:610]: Starting
[D][wifi:1263]: Starting scan
[C][component:278]: Setup wifi took 56ms
[I][app:138]: setup() finished successfully!
[I][pmu_check:020]: read 0x04 : 0x00
[I][pmu_init:022]: First power-up detected → Initializing PMU settings
[I][i2c_custom:024]: Set DC3 Successfully.
[I][i2c_custom:025]: Set ALDO1 Successfully.
[I][i2c_custom:026]: Set ALDO2 Successfully.
[I][i2c_custom:027]: Set ALDO4 Successfully.
[I][i2c_custom:028]: Set ALDO3 Successfully.
[I][i2c_custom:029]: Set BLDO1 Successfully.
[I][i2c_custom:030]: Enable DC Successfully.
[I][i2c_custom:031]: Set LDO ON Successfully.
[I][i2c_custom:032]: Set TS Pin Detection Disabled Successfully.
[I][i2c_custom:033]: Set Charger Constant Current Successfully.
[I][i2c_custom:034]: Set Charge Target Voltage Successfully.
[I][i2c_custom:035]: Set Charging LED Mode Successfully.
[I][pmu_init:040]: Wrote 0x01 to 0x04
[I][pmu_init:046]: PMU initialization complete → Rebooting...
ESP-ROM:esp32s3-20210327
Build:Mar 27 2021
rst:0xc (RTC_SW_CPU_RST),boot:0x8 (SPI_FAST_FLASH_BOOT)
Saved PC:0x4202d1fd
SPIWP:0xee
mode:DIO, clock div:1
load:0x3fce2820,len:0x15c8
load:0x403c8700,len:0xce4
load:0x403cb700,len:0x2f34
entry 0x403c8918
I (24) boot: ESP-IDF 5.5.2 2nd stage bootloader
I (24) boot: compile time Feb 28 2026 02:26:49
I (24) boot: Multicore bootloader
I (24) boot: chip revision: v0.2
I (24) boot: efuse block revision: v1.3
I (25) boot.esp32s3: Boot SPI Speed : 80MHz
I (25) boot.esp32s3: SPI Mode       : DIO
I (25) boot.esp32s3: SPI Flash Size : 4MB
I (25) boot: Enabling RNG early entropy source...
I (26) boot: Partition Table:
I (26) boot: ## Label            Usage          Type ST Offset   Length
I (26) boot:  0 nvs              WiFi data        01 02 00009000 00005000
I (27) boot:  1 otadata          OTA data         01 00 0000e000 00002000
I (27) boot:  2 app0             OTA app          00 10 00010000 001c0000
I (27) boot:  3 app1             OTA app          00 11 001d0000 001c0000
I (28) boot:  4 eeprom           Unknown data     01 99 00390000 00001000
I (28) boot:  5 spiffs           Unknown data     01 82 00391000 0000f000
I (29) boot: End of partition table
I (29) esp_image: segment 0: paddr=00010020 vaddr=3c0b0020 size=1e95ch (125276) map
I (52) esp_image: segment 1: paddr=0002e984 vaddr=3fc96400 size=01694h (  5780) load
I (53) esp_image: segment 2: paddr=00030020 vaddr=42000020 size=a088ch (657548) map
I (170) esp_image: segment 3: paddr=000d08b4 vaddr=3fc97a94 size=05770h ( 22384) load
I (175) esp_image: segment 4: paddr=000d602c vaddr=40374000 size=12320h ( 74528) load
I (191) esp_image: segment 5: paddr=000e8354 vaddr=50000000 size=00020h (    32) load
I (200) boot: Loaded app from partition at offset 0x10000
I (200) boot: Disabling RNG early entropy source...
[I][logger:118]: Log initialized
[I][app:091]: Running through setup()
[I][i2c.idf:206]: Performing bus recovery
[I][i2c.idf:206]: Performing bus recovery
[D][binary_sensor:044]: 'ttgocam2 PIR' >> ON
[C][component:278]: Setup esp32_camera took 206ms
[C][component:278]: Setup display took 124ms
[C][wifi:610]: Starting
[D][wifi:1263]: Starting scan
[C][component:278]: Setup wifi took 55ms
[I][app:138]: setup() finished successfully!
[I][pmu_check:020]: read 0x04 : 0x01
[I][pmu_check:049]: Flag is already 0x01 → Power has been initialized, skipping PMU settings
[W][component:431]: wifi set Warning flag: scanning for networks
[I][app:215]: ESPHome version 2026.2.2 compiled on 2026-03-02 02:03:27 +0000
[I][app:222]: ESP32 Chip: ESP32-S3 rev0.2, 2 core(s)
[C][logger:237]: Logger:
  Max Level: DEBUG
  Initial Level: DEBUG
[C][logger:244]:   Log Baud Rate: 115200
  Hardware UART: USB_SERIAL_JTAG
[C][logger:254]:   Task Log Buffer Size: 768 bytes
[C][i2c.idf:093]: I2C Bus:
[C][i2c.idf:094]:   SDA Pin: GPIO7
  SCL Pin: GPIO6
  Frequency: 100000 Hz
[C][i2c.idf:104]:   Recovery: bus successfully recovered
[C][i2c.idf:114]: Results from bus scan:
[C][i2c.idf:120]: Found device at address 0x34
[C][i2c.idf:120]: Found device at address 0x3C
[C][i2c.idf:093]: I2C Bus:
[C][i2c.idf:094]:   SDA Pin: GPIO5
  SCL Pin: GPIO4
  Frequency: 50000 Hz
[C][i2c.idf:104]:   Recovery: bus successfully recovered
[C][i2c.idf:114]: Results from bus scan:
[C][i2c.idf:120]: Found device at address 0x30
[C][gpio.binary_sensor:016]: GPIO Binary Sensor 'ttgocam2 PIR'
[C][gpio.binary_sensor:163]:   Device Class: 'motion'
[C][gpio.binary_sensor:152]:   Pin: GPIO17
[C][gpio.binary_sensor:069]:   Mode: interrupt
[C][gpio.binary_sensor:071]:   Interrupt Type: ANY_EDGE
[C][psram:016]: PSRAM:
[C][psram:019]:   Available: YES
[C][psram:021]:   Size: 8192 KB
[C][esp32_camera:057]: ESP32 Camera:
  Name: camera
  Internal: NO
  Data Pins: D0:14 D1:47 D2:48 D3:21 D4:13 D5:11 D6:10 D7:9
  VSYNC Pin: 8
  HREF Pin: 18
  Pixel Clock Pin: 12
  External Clock: Pin:38 Frequency:20000000
  I2C Pins: SDA:-1 SCL:-1
  Reset Pin: 39
[C][esp32_camera:094]:   Resolution: 1024x768 (XGA)
[C][esp32_camera:137]:   JPEG Quality: 10
  Framebuffer Count: 1
  Framebuffer Location: PSRAM
  Contrast: 0
  Brightness: 0
  Saturation: 0
  Vertical Flip: OFF
  Horizontal Mirror: OFF
  Special Effect: 0
  White Balance Mode: 0
[C][esp32_camera:153]:   Auto Exposure Control: 1
  Auto Exposure Control 2: 0
  Auto Exposure Level: 0
  Auto Exposure Value: 300
  AGC: 1
  AGC Gain: 0
  Gain Ceiling: 0
[C][esp32_camera:167]:   Test Pattern: NO
[C][ssd1306_i2c:022]: I2C SSD1306
  Rotations: 180 °
  Dimensions: 128px x 64px
[C][ssd1306_i2c:023]:   Model: SSD1306 128x64
  External VCC: NO
  Flip X: YES
  Flip Y: YES
  Offset X: 0
  Offset Y: 0
  Inverted Color: NO
[C][ssd1306_i2c:033]:   Address: 0x3C
[C][ssd1306_i2c:488]:   Update Interval: 2.0s
[C][wifi:1450]: WiFi:
  Local MAC: 8C:BF:EA:0B:16:44
  Connected: NO
[C][mdns:177]: mDNS:
  Hostname: lilygo-esp32s3-camera-20260202
[C][esp32_camera_web_server:090]: ESP32 Camera Web Server:
  Port: 8080
[C][esp32_camera_web_server:095]:   Mode: stream
[C][esp32_camera_web_server:090]: ESP32 Camera Web Server:
  Port: 8081
[C][esp32_camera_web_server:097]:   Mode: snapshot
[W][component:579]: display took a long time for an operation (114 ms)
[W][component:582]: Components should block for at most 30 ms
[W][component:579]: logger took a long time for an operation (117 ms)
[W][component:582]: Components should block for at most 30 ms
[D][main:065]: Normal startup process - camera should be initialized soon
[D][wifi:1382]: Found networks:
[I][wifi:1353]: - 'LilyGo-AABB' (B8:3A:08:01:A1:92) ▂▄▆█ Ch: 6 -60dB P:0
[D][wifi:1739]: Retry phase: INITIAL_CONNECT → SCAN_CONNECTING
[I][wifi:1064]: Connecting to 'LilyGo-AABB' (B8:3A:08:01:A1:92) (priority 0, attempt 1/2 in phase SCAN_CONNECTING)...
[I][wifi:1475]: Connected
[C][wifi:1202]:   IP Address: 192.168.36.187
[C][wifi:1213]:   SSID: 'LilyGo-AABB'
  BSSID: B8:3A:08:01:A1:92
  Hostname: 'lilygo-esp32s3-camera-20260202'
  Signal strength: -63 dB ▂▄▆█
  Channel: 6
  Subnet: 255.255.255.0
  Gateway: 192.168.36.1
  DNS1: 192.168.36.1
  DNS2: 0.0.0.0
[W][component:462]: wifi cleared Warning flag
[D][binary_sensor:044]: 'ttgocam2 PIR' >> OFF
[D][binary_sensor:044]: 'ttgocam2 PIR' >> ON

```
