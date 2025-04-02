#include "meraki.h"
#define _LAY0 0
#define _LAY1 1
#define _LAY2 2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_LAY0] = LAYOUT (
		KC_TAB, KC_W, KC_R, KC_Y, KC_I, KC_P, 						// TAB | W | R | Y | I | P |
		KC_Q, KC_E, KC_T, KC_U, KC_O, KC_BSPC, 						//  Q | E | T | U | O | Back |
		
		KC_LCTL, KC_S, KC_F, KC_H, KC_K, KC_SCLN, 					// LCtrl | S | F | H | K | ;: |
		KC_A, KC_D, KC_G, KC_J, KC_L, KC_QUOT, 						//   A   | D | G | J | L | '" |
		
		KC_LSFT, KC_X, KC_V, KC_N, KC_COMM, KC_SLSH, 				// LShift| X | V | N | ,<| /? |
		KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_RSFT, 					//   Z   | C | B | M | .>| RShift
		
		KC_LALT, MO(_LAY1), KC_ENT, KC_RALT, 						// LAlt  |Cap1 | Enter| RAlt
		KC_MPLY, KC_LGUI, KC_SPC, MO(_LAY2), KC_DEL),			    // Play  | Win |  SPC | Cap2 | Del

	[_LAY1] = LAYOUT (
		KC_ESC, KC_2, KC_4, KC_6, KC_8, KC_0, 						// ESC | 2 | 4 | 6 | 8 | 0 |
		KC_1, KC_3, KC_5, KC_7, KC_9, KC_BSPC, 						//   1 | 3 | 5 | 7 | 9 |Back|
		
		KC_F1, KC_F3, KC_F5, KC_TRNS, KC_UP, KC_HOME, 				//  F1 | F3 | F5 | TRNS|  UP  | HOME
		KC_F2, KC_F4, KC_F6, KC_TRNS, KC_TRNS, KC_TRNS, 			//  F2 | F4 | F6 | TRNS| TRNS | TRNS
		
		KC_F7, KC_F9, KC_F11, KC_DEL, KC_DOWN, KC_END,    			//  F7 | F9  | F11 | DEL  | DOWN  | END
		KC_F8, KC_F10, KC_F12, KC_LEFT, KC_RIGHT, KC_TRNS,  	    //  F8 | F10 | F12 | LEFT | RIGHT | TRNS
		
		KC_1, KC_2, KC_3, KC_4, 
		KC_1, KC_2, KC_3, KC_4, KC_5),

	[_LAY2] = LAYOUT (
		KC_F1, KC_F3, KC_F5, KC_F7, KC_F9, KC_F11,               // F1 | F3 | F5 | F7 | F9 | F11 |
		KC_F2, KC_F4, KC_F6, KC_F8, KC_F10, KC_F12,              // F2 | F4 | F6 | F8 | F10| F12 |
		
		KC_PSLS, KC_PMNS, KC_RIGHT, KC_UP, KC_DOT, KC_GRAVE,     //  * |
		KC_PAST, KC_PPLS, KC_LEFT, KC_DOWN, KC_COMMA, KC_QUOTE, 
		
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _LAY1:
            rgblight_setrgb(RGB_BLUE);
            break;
        case _LAY2:
            rgblight_setrgb(RGB_RED);
            break;
		case _LAY3:
            rgblight_setrgb(RGB_CYAN);
            break;
        default: // for any other layers, or the default layer
            rgblight_setrgb (RGB_WHITE);
            break;
    }
  return state;
}
#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:
            if (clockwise) {
                tap_code(KC_VOLD);
            } else {
                tap_code(KC_VOLU);
            }
        break;
		case 1:
            if (clockwise) {
                tap_code(KC_BRIU);
            } else {
                tap_code(KC_BRID);
            }
        break;
    }
    return true;
}
#endif


