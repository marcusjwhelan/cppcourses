#include <iostream>
using namespace std;

class Test {
    int id{3};
    int it = 3;
    string name{"Mike"};
public:
    // C++ 11 implicit constructor
    Test() = default;

    // copy constructor explicit default
    // EX: Test test2 = test1
    Test(const Test &other) = default;
    // to make not copyable
    // Test(const Test &ohter) = delete;

    // implicit = to explicit
    // EX: test2 = test;
    Test &operator = (const Test &other) = default; // can make this not possible by setting = delete;

    Test(int id): id(id) {};
    void print() {
        cout << id << " " << it << " " << name << endl;
    }
};

int main() {
    Test test;
    test.print();

    Test test1(77);
    test1.print();

    Test test2 = test1;
    test2 = test;

    return 0;
}