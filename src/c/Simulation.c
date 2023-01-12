#include <Simulation.h>
#include <stdio.h>

struct Simulation Simulation_ctor(char* id) {
    struct Simulation simulation;

    simulation.id = id;
    simulation.objects = NULL;
    simulation.objectCount = 0;

    simulation.gravity = -9.81;

    simulation.defaultTime = seconds;
    simulation.defaultDistance = meters;
    simulation.defaultMass = grams;

    simulation.stepUnitCount = 1;

    return simulation;
}

struct StepResult Simulation_step(struct Simulation* simulation, unsigned int count) {
    struct StepResult result = {};

    for (unsigned int i = 0; i < count; i++) {
        for (unsigned int objIndex = 0; i < simulation->objectCount; i++) {
            struct PhysicsObject* object = &simulation->objects[objIndex];


        }

        simulation->stepCount++;
    }

    return result;
}