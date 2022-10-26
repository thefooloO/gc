cmake_minimum_required(VERSION 3.20)
project(gc C)

set(CMAKE_C_STANDARD 99)

add_executable(gc main.c mark_sweep/mark_sweep.h mark_sweep/mark_sweep.c reference_counting/reference_counting.c reference_counting/reference_counting.h)
