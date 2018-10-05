#include <iostream>
#include <memory> // needed for shared and unique pointers
using namespace std;

class Test{
public:
    Test() {
        cout << "created" << endl;
    }

    void greet() {
        cout << "Hello" << endl;
    }

    ~Test() {
        cout << "destroy" << endl;
    }
};


int main() {
    shared_ptr<Test> pTest2(nullptr);
    // don't delete mem associated with objects until
    // all the pointers that point to that object have gone out of scope
    // cant currently use them for arrays for C++ 11 but might in 17

    // shared_ptr<Test> pTest1(new Test);
    // best way to make it a shared value is to use the make shared macro
    {
        shared_ptr<Test> pTest1 = make_shared<Test>();
        pTest2 = pTest1; // tada
    }

    // mem wont be destroyed until both variables go out of scope

    cout << "Finished" << endl;


    return 0;
    // now both get destroyed
}