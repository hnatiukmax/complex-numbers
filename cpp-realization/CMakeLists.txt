cmake_minimum_required(VERSION 3.14)
project(WorkableTest)

set(CMAKE_CXX_STANDARD 17)

add_executable(WorkableTest main.cpp math/complex/ComplexNumber.cpp math/complex/ComplexNumber.h)