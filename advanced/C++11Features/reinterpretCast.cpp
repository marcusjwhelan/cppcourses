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
    Sister sister;

    Parent *ppb = &brother;

    Sister *pbb = reinterpret_cast<Sister *>(ppb);

    // idk why you would need this.
    // since lateral cast. Can use this cast for this.
    // generally best avoided.

    if (pbb == nullptr) {
        cout << "Invalid cast" << endl;
    } else {
        cout << pbb << endl;
    }

    return 0;
}