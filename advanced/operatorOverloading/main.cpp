#include <iostream>
using namespace std;

// operator overloading      =

class Test {
private:
    int id;
    string name;

public:
    Test(): id(0), name("") {}
    Test(int id, string name): id(id), name(name) {}
    void print() {
        cout << id << ": " << name << endl;
    }

    // custom = operator to return constant reference
    // deep copy
    const Test &operator=(const Test &other) {
        cout << "Assignment running" << endl;
        id = other.id;
        name = other.name;

        // dereference this
        return *this;
    }

    // copy constructor
    Test(const Test &other) {
        cout << "Copy Constructor running" << endl;
        *this = other;
        // id = other.id;
        // name = other.name;
    }
};

int main() {

    Test test1(10, "Mike");
    cout << "Print test1: " << flush;
    test1.print();

    Test test2(20, "Bob");
    test2 = test1; // shallow copy   .. not once using custom operator overloading
    cout << "Print test2: " << flush;
    test2.print();

    Test test3;
    // test3 = test2 = test1;
    test3 = test2;
    // test3.operator=(test2); // just like test3 = test2
    cout << "Print test3: " << flush;
    test3.print();


    cout << endl;

    // copy initialization
    // implicit copy constructor and not the = operator
    Test test4 = test1;
    test4.print();



    /*
     * RULE OF 3.
     *
     * if you make a copy constructor
     * or a destructor
     * or a = operator
     *
     * then you should implement the other 2 as well.
     *
     * */


    return 0;
}