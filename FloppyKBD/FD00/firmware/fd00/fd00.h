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

#pragma once

#include "quantum.h"

#define LAYOUT( \
		 K01, K02, K03, \
		 K11, K12, K13, \
	K20, K21, K22, K23, \
	K30, K31, K32, K33 \
) \
{ \
	{ KC_NO,K01,  K02,  K03 }, \
	{ KC_NO,K11,  K12,  K13 }, \
	{ K20,  K21,  K22,  K23 }, \
	{ K30,  K31,  K32,  K33 } \
}
