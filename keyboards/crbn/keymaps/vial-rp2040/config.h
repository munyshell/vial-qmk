#pragma once

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

/* VIAL Keyboard UID */
#define VIAL_KEYBOARD_UID {0xC1, 0x9B, 0x8E, 0x7B, 0x43, 0xD7, 0x61, 0xEE}

/* VIAL Unlock combo keys */
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 11 }

#define TAPPING_TERM 100

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

#define NO_ACTION_ONESHOT
