#include <iostream>
using namespace std;

class Parent {
    // object slicing
private:
    int one = 0;
public:
    // c++ 11 allows to use this to set default constructor
    // need to set this if we make our own copy constructor
    // for polymorphism purposes.
    Parent() = default;

    // copy constructor
    Parent(const Parent &other) {
        one = other.one;
        cout << "copied parent" << endl;
    }

    virtual void print() {
        cout << "parent" << endl;
    }

    virtual ~Parent() {

    }
};

class Child: public Parent {
private:
    int two = 0;
public:
    Child() = default;
    void print() {
        cout << "child" << endl;
    }
};


int main() {
    Child c1;
    Parent &p1 = c1;
    p1.print();

    // hmm invoking parent class copy constructor
    // object slicing -> because we slice off the child class variable because its now a
    // parent type. Upcasting child to parent type. Loses child types
    Parent p2 = Child();
    p2.print();

    return 0;
}