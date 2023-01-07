cmake_minimum_required(VERSION 3.24)

project(PhySim C)

set(CMAKE_C_STANDARD 11)

add_library(PhySim SHARED src/c/Simulation.c src/h/Simulation.h src/c/PhysicsObject.c src/h/PhysicsObject.h src/c/Origin.c src/h/Origin.h src/h/Origin.h src/c/Vector2.c src/h/Vector2.h src/h/Vector2.h src/c/Color.c src/h/Color.h src/c/StepResult.c src/h/StepResult.h src/h/StepResult.h src/c/StepResult.c)
