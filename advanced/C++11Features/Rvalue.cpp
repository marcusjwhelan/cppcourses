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
    return Test(); // temporary value
}

// param1 Lvalue
void check(const Test &value) {
    cout << "lValue function" << endl;
}
// param1 Rvalue
void check(Test &&value) {
    cout << "rValue function" << endl;
}

int main() {

    Test test1 = getTest();

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    // identify temporary value
    // Rvalue ref
    Test &ltest1 = test1; // pointing lvalue to lvalue
    // rvalue to lvalue -> cannot bind directly to lValue
    // Test &&rtest1 = test1;
    // but can
    Test &&rtest1 = Test();

    check(test1); // lvalue
    check(getTest()); // rvalue
    check(Test()); // rvalue
    

    return 0;
}