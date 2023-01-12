#ifndef PHYSISIM_PHYSICSOBJECT_H
#define PHYSISIM_PHYSICSOBJECT_H

#endif //PHYSISIM_PHYSICSOBJECT_H

#include "Origin.h"
#include "Vector2.h"
#include "Color.h"

struct PhysicsObject {
    char* id;
};

struct PhysicsObject PhysicsObject_ctor(char* id);