#include <iostream>
#include "Person.h"
using namespace std;

int main() {
    Person person1;
    Person person2("Bob");
    Person person3("Sue", 35);

    cout << person1.toString() << "; mem loc: " << &person1 << endl;
    cout << person2.toString() << "; mem loc: " << &person2 << endl;
    cout << person3.toString() << "; mem loc: " << &person3 << endl;

    return 0;
}