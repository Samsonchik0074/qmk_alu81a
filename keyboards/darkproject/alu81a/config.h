#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0x342D
#define PRODUCT_ID      0xE40B
#define DEVICE_VER      0x0001
#define MANUFACTURER    Terra Nova
#define PRODUCT         ALU81A
#define VIAL_KEYBOARD_UID {0xB2, 0x30, 0x60, 0x12, 0x65, 0xC9, 0xD1, 0x3A}

#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6, D3, D2, D1, D0, C7, B0, F0 }
#define DIODE_DIRECTION COL2ROW

#define RGB_DI_PIN F1
#define RGBLED_NUM 81
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

#endif