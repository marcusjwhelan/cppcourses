#include <iostream>
using namespace std;

class Parent {
public:
    void speak() {
        cout << "parent" << endl;
    }
};

class Brother: public Parent {

};

class Sister: public Parent {

};

int main() {

    Parent parent;
    Brother brother;

    // casting in C
    float value = 3.23;
    cout << (int)value << endl;

    // c++
    cout << int(value) << endl;
    // C++ more precise reduce errors
    cout << static_cast<int>(value) << endl;


    // now
    // pointer to parent -> set to child class
    // don't need casting bc of polymorphism
    Parent *pp = &brother;


    // cant right out of the box
    // Brother *pb = &parent;
    // force work
    Brother *pb = static_cast<Brother *>(&parent);
    // valid address -> VERY UNSAFE <-
    cout << pb << endl;

    // maybe do if you want to do this
    Parent *ppb = &brother; // parent pointer pointing to brother
    Brother *pbb = static_cast<Brother *>(ppb); // pointer brother pointing to brother
    // could be error prone still.
    cout << pbb << endl;
    

    // Rvalue ref to an Rvalue. that is fine
    Parent &&p = Parent();
    // what if Rvalue ref to Lvalue
    Parent &&p2 = static_cast<Parent &&>(parent);

    p2.speak();

    return 0;
}