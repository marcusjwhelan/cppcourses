cmake_minimum_required(VERSION 3.10)
project(staticLib)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES Cat.cpp Cat.h)
add_library(staticLib STATIC ${SOURCE_FILES})

