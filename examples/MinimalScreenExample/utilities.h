/**
 * @file      utilities.h
 * @author    Lewis He (lewishe@outlook.com)
 * @license   MIT
 * @copyright Copyright (c) 2022  Shenzhen Xin Yuan Electronic Technology Co., Ltd
 * @date      2022-09-16
 *
 */
#pragma once

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


#define IIS_WS_PIN                  (42)
#define IIS_DIN_PIN                 (41)
#define IIS_SCLK_PIN                (40)


#define EXTERN_PIN1                 (16)
#define EXTERN_PIN2                 (15)

#define BUTTON_COUNT                (1)
#define USER_BUTTON_PIN             (0)
#define BUTTON_ARRAY                {USER_BUTTON_PIN}
