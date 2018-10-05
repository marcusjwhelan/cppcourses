#include <iostream>
#include <sstream> // concat string and numbers
using namespace std;

int main() {
    string name = "Bob";
    int age = 32;

    // string info = "Name: " + name + "; age: " + age; does not work

    stringstream ss;
    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;
    cout << ss.str() << endl;

    string info = ss.str();
    cout << info << endl;

    return 0;
}