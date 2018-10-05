#include <iostream>
#include "Complex.h"
using namespace std;
using namespace mjw;

int main() {

    Complex c1(3, 4);
    Complex c2(2, 3);

    Complex c3 = c1 + c2;

    cout << c1 << endl;
    cout << c3 << endl;

    // add them
    cout << c1 + c2 + c3 << endl;

    // double addition
    Complex c4(4, 2);
    Complex c5 = c4 + 7;
    cout << c5 << endl;

    Complex c6(1, 7);
    // have to overwrite a special operator for double on the left and complex on right
    cout << 3.2 + c6 << endl;


    return 0;
}