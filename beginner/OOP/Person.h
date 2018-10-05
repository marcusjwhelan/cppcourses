#ifndef OOP_PERSON_H
#define OOP_PERSON_H

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
public:
    // Overloading. have methods with the same name but different parameter #
    Person(): name(""), age(0) {};
    Person(string newName): name(newName), age(0) {}; // inline implementation. can put in Person.cpp
    Person(string name, int age);
    
    string toString();
};


#endif //OOP_PERSON_H
