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

    Test test1 = getTest(); // values returned from functs are Rvalues

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    // left     right   values
    int value1 = 7;

    // C++ 11 extends teh definition
    // lvalue anything you can take the address of
    int *pValue1 = &value1;
    // cannot
    // int *pValue2 = &7;

    // same thing applies to objecst
    Test *pTest1 = &test1;
    // cannot
    // Test *pTest2 = &getTest(); Rvalues are temp values


    // prefix inc the value before you use it
    int *pValue3 = &++value1; // Lvalue
    cout << *pValue3 << endl;

    // cant do postfix. .. because &value1++ is an Rvalue. Cant do that
    // int *pValue3 = &value1++;

    int s = (7 + value1); // value1 = Lvalue okay :D. but (7 + value1) is Rvalue
    // so cannot
    // int *s = &(7 + value1);
    
    return 0;
}