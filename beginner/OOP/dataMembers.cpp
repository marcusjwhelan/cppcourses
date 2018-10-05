#include "Cat2.h"
#include <iostream>
using namespace std;
int main() {

    { // cat 1 only exists inside this scope
        Cat2 cat;
        cat.setName("Freddy Mercury");
        cat.makeHappy();
        cat.speak();
        cout << "Name is: " << cat.getName() << endl;
    } // this way the cat is destroyed before the next cat is made

    {
        Cat2 bob;
        bob.setName("bob");
        bob.makeSad();
        bob.speak();
        cout << "Name is: " << bob.getName() << endl;
    }
    cout << "OMG!!" << endl;

    return 0;
}

