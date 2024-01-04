/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2020 Ben Roesner (keycapsss.com)

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

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_ANIMATIONS
  #define RGBLIGHT_HUE_STEP 6 // number of steps to cycle through the hue by
  #define RGBLIGHT_SAT_STEP 6 // number of steps to increment the saturation by
  #define RGBLIGHT_VAL_STEP 6 // number of steps to increment the brightness by
  #define RGBLIGHT_SLEEP //  the RGB lighting will be switched off when the host goes to sleep
#endif

// Master is where the usb cable is plugged in
#define MASTER_LEFT
// #define MASTER_RIGHT
#define TAPPING_TERM 200

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT
