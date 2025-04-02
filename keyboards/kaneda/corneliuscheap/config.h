#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

/* key matrix pins */
#define MATRIX_ROW_PINS { B4, B5, B2, B6 }
#define MATRIX_COL_PINS { D3, D2, C6, D4, E6, D7, F7, F6, B3, B1, F5, F4 }

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
