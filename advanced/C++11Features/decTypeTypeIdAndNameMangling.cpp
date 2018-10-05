#include <iostream>
//#include <typeinfo> // typeid

using namespace std;


int main() {

    // typeId from C++98
    int value;
    cout << typeid(value).name() << endl; // gets "i" means integer
    double d;
    cout << typeid(d).name() << endl; // gets "d" means double
    string s;
    cout << typeid(s).name() << endl; // gets "NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE" wtf


    // declType new in C++11
    // declare variables of a certain type
    decltype(s) name = "Bob"; // so name is a string type
    cout << typeid(name).name() << " : " << name << endl;

    return 0;
}