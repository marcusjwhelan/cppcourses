#include <iostream>
using namespace std;

int main() {

    int one = 1;
    int two = 2;
    int three = 3;

    // first bracket is to capture local variables .. below is pass by value
    // think of a lambda as a real Function of JS. not an () => {}
    [one, two, three](){ cout << "Hello " << one << ", " << two << ", " << three << endl; }();

    // capture all local variables by value
    [=](){ cout << one << two << three << endl;}();

    // capture some by value and some by ref;
    // cannot set values that are captured by value. But you can change ref values -> three
    [=, &three](){ cout << one << two << three << endl;}();

    // capture all local variables by default by ref
    [&](){ two = 3; three = 2; one = 2;}();
    cout << one << two << three << endl;

    // all ref by default but some by val
    [&, two, three](){one=100, cout << one << ", " << two << endl;}();

    return 0;
}

