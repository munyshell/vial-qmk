#include "corneliuscheap.h"
#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _RGB 3


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 /* Base Layer
   * ,-------------------------------------.                     .--------------------------------------.
   * |  Tab  |  Q  |  W  |  E  |  R  |  T  |                     |  Y  |  U  |  I  |  O  |  P  | Bspace |
   * |-------------------------------------|                     |--------------------------------------+
   * |  Esc  |  A  |  S  |  D  |  F  |  G  |                     |  H  |  J  |  K  |  L  |  ;  |    '   |
   * |-------------------------------------|                     |--------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |                     |  N  |  M  |  ,  |  .  |  /  |   Caps |
   * |-------------------------------------|                     |--------------------------------------+
   * |  NO   | Ctrl| Gui | Alt |L1   |Space|                     |Enter| L2  | Alt | Gui | Ctrl |   NO  |   
   * `-------------------------------------.                     .--------------------------------------'
 */

	[_BASE] = LAYOUT (
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC, 
		KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, 
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_CAPS, 
		KC_NO,   KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_ENT, MO(2),  KC_RALT, KC_RGUI, KC_RCTL, KC_NO),

 [_FN1] = LAYOUT(
   _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
   _______, _______, _______, _______,   MO(1), _______, _______,   MO(3), _______, _______, _______, _______),
 

	[_FN2] = LAYOUT(
   _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE,  KC_GRV,
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
   _______, _______, _______, _______,   MO(3), _______, _______,   MO(2), _______, _______, _______, _______),

  
	[_RGB] = LAYOUT (
		KC_ESC,  KC_CALC, KC_WHOM, KC_MAIL, KC_MYCM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR, KC_TRNS,
		KC_TRNS, RGB_TOG, RGB_MOD, RGB_SAI, RGB_HUI, RGB_VAI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
		KC_TRNS, KC_TRNS, RGB_M_P, RGB_SAD, RGB_HUD, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}