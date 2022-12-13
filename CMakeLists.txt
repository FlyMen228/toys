cmake_minimum_required(VERSION 3.23)
project(toys)

set(CMAKE_CXX_STANDARD 23)

add_executable(toys main.cpp "Toy.h" Toy.cpp)
