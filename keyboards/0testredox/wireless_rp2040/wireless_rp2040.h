/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

#include "quantum.h"

#define red_led_off   writePinHigh(GP28)
#define red_led_on    writePinLow(GP28)
#define blu_led_off   writePinHigh(GP29)
#define blu_led_on    writePinLow(GP29)
#define grn_led_off   writePinHigh(GP1)
#define grn_led_on    writePinLow(GP1)
#define wht_led_off   writePinHigh(GP0)
#define wht_led_on    writePinLow(GP0)

#define set_led_off     red_led_off; grn_led_off; blu_led_off; wht_led_off
#define set_led_red     red_led_on;  grn_led_off; blu_led_off; wht_led_off
#define set_led_blue    red_led_off; grn_led_off; blu_led_on;  wht_led_off
#define set_led_green   red_led_off; grn_led_on;  blu_led_off; wht_led_off
#define set_led_white   red_led_off;  grn_led_off;  blu_led_off; wht_led_on
