cmake_minimum_required(VERSION 3.15)
project(static C)

set(CMAKE_C_STANDARD 99)

add_library(static library.c library.h)