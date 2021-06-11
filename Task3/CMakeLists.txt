cmake_minimum_required(VERSION 3.19)
project(Task27_3)

set(CMAKE_CXX_STANDARD 14)

add_executable(Task27_3 main.cpp header.h Manager.cpp Director.cpp Task+Worker.cpp)