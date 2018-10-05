#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

// Situation C++98 problem code next
// copy elision & return value optimization
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
// so you can cout the class
ostream &operator<<(ostream &out, const Test &test) {
    out << "Hello from test";
    return out;
}

// problem here.. if optimization is turned off the create
// and destroy and print run a lot more than once
// bad code
Test getTest() {
    return Test();
}


int main() {

    Test test1 = getTest();

    cout << test1 << endl;

    // inefficient next tutorial will show how to fix
    vector<Test> vec;
    vec.push_back(Test());

    return 0;
}