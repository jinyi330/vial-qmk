#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    k00, k01, \
    k10, k11,  \
    k20, k21,  \
    k30, k31  \
) { \
    { k00, k01 }, \
    { k10, k11 }, \
    { k20, k21 }, \
    { k30, k31 }  \
}
