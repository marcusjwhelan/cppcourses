#include <iostream>
#include "Cat2.h"
using namespace std;

Cat2::Cat2() {
    cout << "Cat Created." << endl;
    happy = true;
    name = "";
}

Cat2::~Cat2() {
    cout << "Cat exploded" << endl;
}

void Cat2::speak() {
    if (happy) {
        cout << "Meow!!" << endl;
    } else {
        cout << "MMMMMMMEEEEEEOOOOWWW!!!" << endl;
    }
}

void Cat2::makeHappy() {
    happy = true;
}
void Cat2::makeSad() {
    happy = false;
}

string Cat2::toString() {
    return "Cats name is " + name;
}

void Cat2::setName(string newName){
    name = newName;
}

string Cat2::getName() {
    return name;
}