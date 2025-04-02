#ifndef CONFIG_H
#define CONFIG_H

#define VENDOR_ID       0x4C44 // "LD"
#define PRODUCT_ID      0x0031
#define DEVICE_VER      0x0001
#define MANUFACTURER    "TheoriesLab"
#define PRODUCT         "Meraki"

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS { E6, D7, D4, C6, B1, F7, B2, B6 }
#define MATRIX_COL_PINS { D2, D1, D0, F6, F5, F4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 30
#endif

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define LAYER_STATE_8BIT

#define WS2812_DI_PIN D3
#define RGBLIGHT_LED_COUNT 10
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17
#define RGBLIGHT_LIMIT_VAL 255
#define RGBLIGHT_SLEEP
#define RGBLIGHT_BREATHE_TABLE_SIZE 256 
#define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85
#define RGBLIGHT_EFFECT_BREATHE_MAX    255
#define RGBLIGHT_MAX_LAYERS 8

#define ENCODER_A_PINS { B4 }
#define ENCODER_B_PINS { B5 }
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 8

#endif

#define QUICK_TAP_TERM 80
