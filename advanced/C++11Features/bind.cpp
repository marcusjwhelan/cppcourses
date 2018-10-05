#include <iostream>
#include <functional> // need to use bind

using namespace std;
using namespace placeholders;

// bind to method
class Test {
public:
    int add(int a, int b, int c) {
        cout << a << ", " << b << ", " << c << endl;
        return a + b + c;
    }
};


int run(function<int(int, int)> func) {
    return func(7, 3);
}

int main() {

    Test test;

    // bind function
    // allows to create aliases to functions like function pointers

    cout << test.add(1, 2, 3) << endl;

    // param 1 -> function pointer
    // only if using class bind -> put in the class
    // arguments -> for function pointer
    auto calculate = bind(&Test::add, test, 3, 4, 5);  // simple alias

    cout << calculate() << endl;

    auto calc = bind(&Test::add, test,_1, _2, _3);// can pass in dif order, _3, _1, _2. cool beans

    cout << calc(10, 20, 30) << endl;

    auto calc2 = bind(&Test::add, test, _2, 100, _1);

    cout << calc2(10, 20) << endl;

    // ----
    cout << run(calc2) << endl; // 3, 100, 7 , 110 for total


    // bind to methods

    
    return 0;
}