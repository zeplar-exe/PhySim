cmake_minimum_required(VERSION 3.24)
project(PhysiSim C)

set(CMAKE_C_STANDARD 11)

add_library(PhysiSim SHARED src/c/Simulation.c src/c/h/Simulation.h src/c/PhysicsObject.c src/c/h/PhysicsObject.h src/c/Origin.c src/c/h/Origin.h src/c/h/Origin.h src/c/Vector2.c src/c/h/Vector2.h src/c/h/Vector2.h src/c/Color.c src/c/h/Color.h src/c/StepResult.c src/c/h/StepResult.h src/c/h/StepResult.h src/c/StepResult.c)
