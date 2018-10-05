#include <iostream>
using namespace std;

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

    const Test &operator=(const Test &other) {
        id = other.id;
        name = other.name;

        return *this;
    }

    Test(const Test &other) {
        *this = other;// deep copy
    }

    // type of cout = ostream.
    //  args[ cout, ref to Test class ]
    // to make the private methods available. Add as friend
    friend ostream &operator<<(ostream &out, const Test &test) {
        out << test.id << ": " << test.name;
        return out; // being returned as a reference
    }
};


int main() {

    Test test1(10, "Mike");
    Test test2(20, "Bob");
    test1.print();

    // have to make << a friend since the operation is on the left
    // not the right of the class.
    // so trying to do this you would only be able to use this
    // and would have no knowledge of "<<"
    cout << test1 << ", " << test2 << endl;
    
    return 0;
}
