#include "Cat.h"

// do includes here not in the .h
#include <iostream>
// using namespace std; don't do this in libs

namespace mjw {
    void saySomething() {
        std::cout << "Hello there!!!" << std::endl;
    }

    Cat::Cat() {

    }

    void Cat::speak() {
        std::cout << "Meeoouuww!!!" << std::endl;
    }

    Cat::~Cat() {

    }
}