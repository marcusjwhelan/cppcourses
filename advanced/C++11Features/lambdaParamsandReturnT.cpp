#include <iostream>
using namespace std;

void testGreet(void (*greet)(string)) {
    greet("Bob");
}

void runDivide(double (*divide)(double, double)) {
    cout << divide(9, 3) << endl;
}

int main() {

    auto pGreet = [](string name){ cout << "Hello " << name << endl; };

    pGreet("Mike");
    testGreet(pGreet);

    auto pDivide = [](double a, double b) -> double {   // have return type
        if (b == 0.0) {
            return 0;
        }
        return a/b;
    };

    cout << pDivide(10.0,0) << endl;
    cout << pDivide(10.0,5.0) << endl;

    runDivide(pDivide);

    return 0;
}