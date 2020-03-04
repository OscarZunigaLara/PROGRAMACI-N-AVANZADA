cmake_minimum_required(VERSION 3.15)
project(dynamic C)

set(CMAKE_C_STANDARD 99)

add_library(dynamic SHARED librarydynamic.c librarydynamic.h)