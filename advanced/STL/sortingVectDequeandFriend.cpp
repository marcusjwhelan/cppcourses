#include <iostream>
#include <vector>
using namespace std;


// check out DEQUE from stl;
/*
 * like vector but can add to front and back
 * not just to the back like a vector
 *
 * */

class Test {
    // by default items are private
    int id;
    string name;

public:
    Test(int id, string name): id(id), name(name) {}

    void print() {
        cout << id << ": " << name << endl;
    }

    /*bool operator < (const Test &other) const {
        return name < other.name;
    }*/

    // to access private members
    // prototype -> allowed to access since it is a friend
    friend bool comp(const Test &a, const Test &b);
};

bool comp(const Test &a, const Test &b) {
    return a.name < b.name;
}

int main() {
    vector<Test> tests;

    tests.emplace_back(Test(5, "Mike"));
    tests.emplace_back(Test(10, "Sue"));
    tests.emplace_back(Test(7, "Raj"));
    tests.emplace_back(Test(3, "Vicky"));

    // sort a range or whole vector
    // sort(tests.begin(), tests.end()); // if using the operator overloading
    // or supply comp func
    // sort(tests.begin(), tests.end(), comp);
    // sort  a range
    sort(tests.begin(), tests.begin()+2, comp);

    // not effecient to sort a vector.

    // If you want to sort after every insertion use something like a set.

    for (int  i = 0; i < tests.size(); i++) {
        tests[i].print();
    }

    return 0;
}