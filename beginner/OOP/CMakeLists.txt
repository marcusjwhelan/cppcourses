cmake_minimum_required(VERSION 3.10)
project(OOP)

set(CMAKE_CXX_STANDARD 11)

#[[add_executable(OOP classes.cpp Cat.cpp Cat.h)]]
#[[add_executable(OOP dataMembers.cpp Cat2.cpp Cat2.h)]]
#[[add_executable(OOP overloadingConstructors.cpp Person.cpp Person.h)]]
add_executable(OOP namespaces.cpp Dog.cpp Dog.h Animals.cpp Animals.h)