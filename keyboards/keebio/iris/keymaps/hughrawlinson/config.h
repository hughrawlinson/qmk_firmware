/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

#pragma once


#define EE_HANDS

// for the left hand, bridge the 2nd row to B7 because E6 is blown
// on the elite-c
#ifdef MATRIX_ROW_PINS
#undef MATRIX_ROW_PINS
#endif

#define MATRIX_ROW_PINS { D7, B7, B4, D2, D4 }
