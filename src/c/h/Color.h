#ifndef PHYSISIM_COLOR_H
#define PHYSISIM_COLOR_H

#endif //PHYSISIM_COLOR_H

struct Color {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct Color Color_ctor(unsigned char r, unsigned char g, unsigned char b, unsigned char a) {
    struct Color color;

    color.r = r;
    color.g = g;
    color.b = b;
    color.a = a;

    return color;
}