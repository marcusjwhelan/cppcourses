#include <iostream>
using namespace std;

class Parent {
public:
    virtual void speak() {
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

    // Parent *ppb = &brother;
    //Brother *pbb = static_cast<Brother *>(ppb); // very unsafe
    // what if parent class super class pointer  actually does point to a super class object
    // ex Parent *ppb = &parent; bad mojo

    // dynamic casts help fix this issue by return null pointer if this is dump code
    Parent *ppb = &parent;

    Brother *pbb = dynamic_cast<Brother *>(ppb); // gets an error on compile says don't do this anyway
    // have to set the speak to virtual to work

    if (pbb == nullptr) {
        cout << "Invalid cast" << endl; // bam you get this.
    } else {
        cout << pbb << endl; // if Parent *ppb = &brother and not &parent
    }

    return 0;
}