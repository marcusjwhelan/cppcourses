#include <iostream>
using namespace std;

void test(int value) {
    cout << "Hello: " << value << endl;
}

/**
 * Function Pointers
 */
int main() {

    void (*pTest)(int); // pointer to a function
    // or void (*pTest)() = test;

    // verbose version
    // pTest = &test; // can now pass pTest as a pointer method
    // (*pTest)();

    // better
    pTest = test;
    pTest(3);

    return 0;
}