/* Copyright 2020 Harry Herring
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

		LAYOUT_crbn_0x2u(
				KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MUTE,
				KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_C, KC_ENT,
				KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
				XXXXXXX, KC_LCTL, KC_LALT, XXXXXXX, XXXXXXX, KC_DEL, KC_ENT, KC_SPC, XXXXXXX, KC_RALT, KC_RCTL, XXXXXXX),

		LAYOUT_crbn_0x2u(
				XXXXXXX, XXXXXXX, XXXXXXX, KC_GRV, KC_TILD, KC_LBRC, KC_RBRC, KC_HOME, KC_UP, KC_END, KC_PGUP, XXXXXXX,
				XXXXXXX, XXXXXXX, XXXXXXX, KC_QUOT, KC_DQUO, KC_LCBR, KC_RCBR, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PGDN, XXXXXXX,
				XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, KC_PIPE, KC_EQL, KC_PLUS, KC_MINS, KC_UNDS, XXXXXXX,
				XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_TAB, KC_SPC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

		LAYOUT_crbn_0x2u(
				XXXXXXX, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
				XXXXXXX, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, XXXXXXX,
        			KC_F11, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F12,
				XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC, KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

		LAYOUT_crbn_0x2u(
				RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U, XXXXXXX,
				XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, XXXXXXX,
				XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX,
				XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
