#ifndef PHYSISIM_SIMULATION_H
#define PHYSISIM_SIMULATION_H

#endif //PHYSISIM_SIMULATION_H

struct Simulation {
    struct PhysicsObject* objects;
    unsigned int objectCount;
    unsigned int stepTimeMs;
    unsigned int stepCount;
};

struct Simulation Simulation_ctor() {
    struct Simulation simulation;

    simulation.stepTimeMs = 1000; // 1 second/step

    return simulation;
}

StepResult step(struct Simulation* simulation, unsigned int count) {
    for (unsigned int i = 0; i < count; i++) {
        simulation->stepCount++;
    }
}

void close() {

}