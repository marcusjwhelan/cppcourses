#include "Person.h"
#include <sstream>

Person::Person(string name, int age) {
    /*name = newName;
    age = newAge;*/
    this->name = name;
    this->age = age;
}

string Person::toString() {
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    return ss.str();
}