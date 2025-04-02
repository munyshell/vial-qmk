#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { D2, F5, D7, D4, D3, F4, E6, C6 }
#define MATRIX_COL_PINS { B6, B2, B3, B1, F7, F6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)


#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define RGB_DI_PIN B0
#ifdef RGB_DI_PIN
  #define RGBLED_NUM 10
  /*  #define RGBLED_NUM 10  */
  /*  #define RGBLED_NUM 8  */
  #define RGBLIGHT_HUE_STEP 10
  #define RGBLIGHT_SAT_STEP 17
  #define RGBLIGHT_VAL_STEP 17
  #define RGBLIGHT_LIMIT_VAL 255
  #define RGBLIGHT_SLEEP
  #define RGBLIGHT_MAX_LAYERS 8
#endif

#define ENCODERS_PAD_A { B4 }
#define ENCODERS_PAD_B { B5 }
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10
#define ENCODER_DIRECTION_FLIP



#ifdef OLED_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_TIMEOUT 30000
#endif
