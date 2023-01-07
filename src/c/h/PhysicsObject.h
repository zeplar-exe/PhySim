#ifndef PHYSISIM_PHYSICSOBJECT_H
#define PHYSISIM_PHYSICSOBJECT_H

#endif //PHYSISIM_PHYSICSOBJECT_H

#include "Origin.h"
#include "Vector2.h"
#include "Color.h"

struct PhysicsObject {
    char* id;
    struct Vector2 position;
    struct Vector2[] vertices;
};

struct PhysicsObject PhysicsObject_ctor(char* id) {
    struct PhysicsObject object;

    object.id = id;

    return object;
}