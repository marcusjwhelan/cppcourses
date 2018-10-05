#include <iostream>
#include "Complex.h"
using namespace std;
using namespace mjw;

int main() {
    // equality
    Complex c1(3, 2);
    Complex c2(3, 9);

    if (c1 == c2) {
        cout << "Equal" << endl;
    }

    if (c1 != c2) {
        cout << "Not Equal" << endl;
    }

    // deference
    // *
    Complex c3(2, 4);
    cout << *c3 + *Complex(4, 3) << endl;

    return 0;
}