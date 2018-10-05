#include <iostream>
using namespace std;

class Test {

};

// template type that uses rvalues
template<typename T> // so since type T is inferred it will work
void call(T &&arg) {
    // to fix this must cast
    // check(arg);
    // check(static_cast<T>(arg));
    // new function called forward that does the same thing
    check(forward<T>(arg));
}

void check(Test &test) {
    cout << "lvalue" << endl;
}

void check(Test &&test) {
    cout << "rvalue" << endl;
}

int main() {

    // test = lValue
    Test test;
    // Test() = rValue
    auto &&t = test;

    // &&t can't be an Rvlue because it will not bind to an Lvalue ref type
    // the ref would collapse.

    // idea behind perfect forwarding
    // want to call the right function.
    // preserve the type

    // Test() is r value
    // call(Test()); // get lvalue -> here we don't have perfect forwarding

    // some times you want to pass on to get the correct type
    // added static cast to call() method to get this to work
    call(Test()); // get rvalue :D
    call(test); // get lvalue :D



    return 0;
}