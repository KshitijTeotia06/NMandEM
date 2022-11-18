cmake_minimum_required(VERSION 3.22)
project(CalcBCProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(CalcBCProject main.cpp)

add_executable(newton newton.cpp)
add_executable(euler euler.cpp)