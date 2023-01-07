cmake_minimum_required(VERSION 3.24)

set(CMAKE_C_COMPILER "C:/Program Files (x86)/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:.Program Files (x86)/mingw-w64/i686-8.1.0-posix-dwarf-rt_v6-rev0/mingw32/bin/g++.exe")

project(PhySim C)

set(CMAKE_C_STANDARD 11)

add_library(PhySim SHARED src/c/Simulation.c src/h/Simulation.h src/c/PhysicsObject.c src/h/PhysicsObject.h src/c/Origin.c src/h/Origin.h src/h/Origin.h src/c/Vector2.c src/h/Vector2.h src/h/Vector2.h src/c/Color.c src/h/Color.h src/c/StepResult.c src/h/StepResult.h src/h/StepResult.h src/c/StepResult.c)
