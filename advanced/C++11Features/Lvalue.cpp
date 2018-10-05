#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

class Test {
public:
    Test() {
        cout << "constructor" << endl;
    }

    Test(int i) {
        cout << "parameterized constructor" << endl;
    }

    Test(const Test &other) {
        cout << "copy constructor" <<endl;
    }

    Test &operator=(const Test &other) {
        cout << "assignment" <<endl;
        return *this;
    }

    ~Test() {
        cout << "destructor" << endl;
    }

    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
    out << "Hello from test";
    return out;
}

Test getTest() {
    return Test();
}


int main() {

    Test test1 = getTest(); 

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    // Lvalue reference
    Test &rTest1 = test1; // bind to Lvalue

    // try to bind Lvalue to Rvalue
    // cannot
    // Test &rTest2 = getTest();
    // but you can
    const Test &rTest2 = getTest();// Rvalue of func gets extended as long as rTest2 exists
    //
    // with copy constructors . .. uses the const Rvalue copy
    Test test2(Test(1)); // Test(1) = Rvalue -> passed into test2 which is Lvalue

    return 0;
}