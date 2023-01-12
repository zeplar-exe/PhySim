#include <PhysicsObject.h>

struct PhysicsObject PhysicsObject_ctor(char* id) {
    struct PhysicsObject object;

    object.id = id;

    return object;
}
