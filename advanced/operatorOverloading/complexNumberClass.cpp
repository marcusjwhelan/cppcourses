#include <iostream>
#include "Complex.h"
using namespace std;
using namespace mjw;
// roll your own :D


int main() {

    Complex c1(2, 3);
    Complex c2 = c1; // copy init. Copy constructor is used
    c1 = c2; // invoke assignment operator

    cout << c1 << endl; // use to string         
    cout << c2 << endl;

    return 0;
}
