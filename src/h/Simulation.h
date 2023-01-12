#include <StepResult.h>
#include <Distance.h>
#include <Mass.h>
#include <Time.h>
#include <PhysicsObject.h>

#ifndef PHYSISIM_SIMULATION_H
#define PHYSISIM_SIMULATION_H

#endif //PHYSISIM_SIMULATION_H

struct Simulation {
    char* id;
    struct PhysicsObject* objects;
    unsigned int objectCount;

    double gravity;

    enum Distance defaultDistance;
    enum Mass defaultMass;
    enum Time defaultTime;

    unsigned int stepUnitCount;
    unsigned int stepCount;
};

struct Simulation Simulation_ctor(char* id);

struct StepResult step(struct Simulation* simulation, unsigned int count);