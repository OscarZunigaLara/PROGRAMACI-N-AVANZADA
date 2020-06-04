cmake_minimum_required(VERSION 3.16)
project(A8 C)

set(CMAKE_C_STANDARD 99)
set(GCC_COVERAGE_COMPILE_FLAGS "-lm")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )
set(SOURCE_FILES main.c)
add_executable(A8 main.c)
target_link_libraries(A8)
