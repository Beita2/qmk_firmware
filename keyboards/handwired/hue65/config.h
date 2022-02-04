#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6582
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Beita
#define PRODUCT         Hue65

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D4, C6, D7 }
#define MATRIX_COL_PINS { B0, F4, F5, F6, F7, B1, B3, B2, B6, F0, F1, C7, D5, B7, B5 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* OLED */
#define OLED_BRIGHTNESS 128
#define OLED_DISABLE_TIMEOUT