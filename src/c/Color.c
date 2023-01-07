//
// Created by zande on 1/6/2023.
//

#include "h/Color.h"

struct Color Color_ctor(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    struct Color color;

    color.r = r;
    color.g = g;
    color.b = b;
    color.a = a;

    return color;
}