cmake_minimum_required(VERSION 3.10)
project(operatorOverloading)

set(CMAKE_CXX_STANDARD 17)

add_executable(operatorOverloading overloadingEqualityTest.cpp Complex.cpp Complex.h)