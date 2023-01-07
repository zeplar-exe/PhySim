#include "StepResult.h"

#ifndef PHYSISIM_SIMULATION_H
#define PHYSISIM_SIMULATION_H

#endif //PHYSISIM_SIMULATION_H

struct Simulation {
    char* id;
    struct PhysicsObject* objects;
    unsigned int objectCount;
    unsigned int stepTimeMs;
    unsigned int stepCount;
};

struct Simulation Simulation_ctor(char* id) {
    struct Simulation simulation;

    simulation.id = id;
    simulation.stepTimeMs = 1000; // 1 second/step

    return simulation;
}

struct StepResult step(struct Simulation* simulation, unsigned int count) {
    for (unsigned int i = 0; i < count; i++) {
        simulation->stepCount++;
    }
}

void close() {

}