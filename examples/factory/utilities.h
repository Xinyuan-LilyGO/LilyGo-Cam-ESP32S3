/**
 * @file      utilities.h
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */
#pragma once

// Board revision. Arduino IDE users select the board here. PlatformIO's v1_6
// and v1_7 environments override this value automatically.
#define LILYGO_BOARD_V1_6           (16)
#define LILYGO_BOARD_V1_7           (17)
#ifndef LILYGO_BOARD_VERSION
#define LILYGO_BOARD_VERSION        LILYGO_BOARD_V1_6
#endif

#define LILYGO_MIC_I2S              (0)
#define LILYGO_MIC_PDM              (1)
#ifndef LILYGO_MIC_TYPE
#if LILYGO_BOARD_VERSION == LILYGO_BOARD_V1_6
#define LILYGO_MIC_TYPE             LILYGO_MIC_I2S
#elif LILYGO_BOARD_VERSION == LILYGO_BOARD_V1_7
#define LILYGO_MIC_TYPE             LILYGO_MIC_PDM
#else
#error "LILYGO_BOARD_VERSION must be LILYGO_BOARD_V1_6 or LILYGO_BOARD_V1_7"
#endif
#endif


// Set this to true if using AP mode
#define USING_AP_MODE       true

// ===================
// Pins
// ===================
#define PWDN_GPIO_NUM               (-1)
#define RESET_GPIO_NUM              (39)
#define XCLK_GPIO_NUM               (38)
#define SIOD_GPIO_NUM               (5)
#define SIOC_GPIO_NUM               (4)
#define VSYNC_GPIO_NUM              (8)
#define HREF_GPIO_NUM               (18)
#define PCLK_GPIO_NUM               (12)
#define Y9_GPIO_NUM                 (9)
#define Y8_GPIO_NUM                 (10)
#define Y7_GPIO_NUM                 (11)
#define Y6_GPIO_NUM                 (13)
#define Y5_GPIO_NUM                 (21)
#define Y4_GPIO_NUM                 (48)
#define Y3_GPIO_NUM                 (47)
#define Y2_GPIO_NUM                 (14)

#define BOARD_I2C_SDA               (7)
#define BOARD_I2C_SCL               (6)

#define PIR_INPUT_PIN               (17)
#define PMU_INPUT_PIN               (2)

#if LILYGO_MIC_TYPE != LILYGO_MIC_I2S && LILYGO_MIC_TYPE != LILYGO_MIC_PDM
#error "LILYGO_MIC_TYPE must be LILYGO_MIC_I2S or LILYGO_MIC_PDM"
#endif

#define MIC_DATA_PIN                (41)
#define MIC_CLK_PIN                 (40)
#define MIC_I2S_WS_PIN              (42)
#define MIC_PDM_LR_PIN              (42)

// LOW selects the left PDM channel; change to HIGH for the right channel.
#ifndef MIC_PDM_LR_LEVEL
#define MIC_PDM_LR_LEVEL            LOW
#endif

// RMS level which generates a microphone event. Tune this for the enclosure.
#ifndef MIC_SOUND_THRESHOLD
#define MIC_SOUND_THRESHOLD         (1200)
#endif

#ifndef MIC_LEVEL_METER_MAX
#define MIC_LEVEL_METER_MAX         (MIC_SOUND_THRESHOLD * 4)
#endif

#define EXTERN_PIN1                 (16)
#define EXTERN_PIN2                 (15)

#define BUTTON_COUNT                (1)
#define USER_BUTTON_PIN             (0)
#define BUTTON_ARRAY                {USER_BUTTON_PIN}
