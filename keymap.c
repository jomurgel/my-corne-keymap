/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_split_3x6_3(
             KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,              KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
             KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G,              KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_RSFT,
            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,              KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LALT,
                           KC_LGUI, MO(1), KC_SPC,              KC_ENT, MO(2), KC_LCTL
        ),
        [1] = LAYOUT_split_3x6_3(
            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5,               KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
            KC_TAB, KC_NO, KC_NO, KC_PIPE, KC_DQUO KC_LBRC,     KC_RBRC, KC_QUOT, KC_BSLS, KC_NO, KC_NO, KC_RSFT,
            KC_LSFT, KC_NO, KC_NO, KC_NO, KC_LPRN, KC_MINS,     KC_EQL, KC_RPRN, KC_NO, KC_NO, KC_NO, KC_LALT,
                            KC_LGUI, KC_TRNS, KC_SPC,           KC_ENT, KC_LSFT, KC_LCTL
        ),
        [2] = LAYOUT_split_3x6_3(
            KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,           KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
            KC_CAPS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, TO(3), KC_UP, KC_NO, KC_NO, KC_RSFT,
            KC_LSFT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,         KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_NO, KC_LALT,
                            KC_LGUI, KC_TRNS, KC_SPC,           KC_ENT, KC_TRNS, KC_LCTL
        ),
        [3] = LAYOUT_split_3x6_3(
            KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
            KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_MOD,         RGB_TOG, KC_TRNS, RGB_VAI, RGB_HUI, RGB_SAI, KC_NO,
            QK_BOOT, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD,      KC_VOLD, KC_VOLU, RGB_VAD, RGB_HUD, RGB_SAD, KC_NO,
                            KC_MPRV, KC_NO, KC_MUTE,            KC_MPLY, TO(0), KC_MNXT
        )
};