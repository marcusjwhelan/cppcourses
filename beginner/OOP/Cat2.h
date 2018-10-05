//
// Created by Marcus Whelan on 4/29/18.
//

#ifndef BASICSYNTAX_CAT2_H
#define BASICSYNTAX_CAT2_H

#include <iostream>
using namespace std; // needed to use string

class Cat2 {
private:
    string name = "";
    bool happy = true; // c++ 11  instance variable

public:
    void makeHappy();
    void makeSad();
    void speak();
    void setName(string newName); // set method
    string getName(); // getter
    Cat2(); // constructor
    ~Cat2(); // destructor
    string toString();
};


#endif //BASICSYNTAX_CAT2_H
