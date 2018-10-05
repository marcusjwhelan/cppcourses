#include "Animals.h"
#include <iostream>
using namespace std;

namespace mjw {
    Dog::Dog() {

    }

    Dog::~Dog() {

    }

    void Dog::speak() {
        cout << "Bark! Bark!" << endl;
    }
}