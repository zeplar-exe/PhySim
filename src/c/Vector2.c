//
// Created by zande on 1/6/2023.
//

#include <Vector2.h>

struct Vector2 Vector2_ctor(int x, int y) {
    struct Vector2 vector;

    vector.x = x;
    vector.y = y;

    return vector;
}

struct Vector2 Vector2_add(struct Vector2 left, struct Vector2 right) {
    struct Vector2 result;

    result.x = left.x + right.x;
    result.y = left.y + right.y;

    return result;
}