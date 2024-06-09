#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13, \
	K20, K21, K22, K23, \
	          K32, K33  \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }, \
	{ K20,   K21,   K22,   K23 }, \
	{ XXX, XXX, K32,   K33 }  \
}
