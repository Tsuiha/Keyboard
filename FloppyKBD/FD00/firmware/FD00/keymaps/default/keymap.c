/* Copyright 2022 Tsuiha
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
[0] = LAYOUT(
				KC_TAB,	KC_UP,	KC_ESC,
				KC_LEFT,KC_DOWN,KC_RIGHT,
	KC_LGUI,	KC_X,	KC_C,	KC_V,
	KC_LCTL,	KC_Z,	KC_Y,	KC_LALT,
  ),

[1] = LAYOUT(
			_______,_______,_______,
			_______,_______,_______,
	_______,_______,_______,_______,
	_______,_______,_______,_______,
  ),

[2] = LAYOUT(
			_______,_______,_______,
			_______,_______,_______,
	_______,_______,_______,_______,
	_______,_______,_______,_______,
  ),

[3] = LAYOUT(
			_______,_______,_______,
			_______,_______,_______,
	_______,_______,_______,_______,
	_______,_______,_______,_______,
  ),
};
