#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numbers(20); // can init to # with -> numbers(20, #); or string what not

    cout << "Size: " << numbers.size() << endl;

    // if you add to a vector that has a set size it will create a new vector and add all the elements
    // plus the new element
    unsigned long capacity = numbers.capacity();
    cout << "Capacity: " << capacity << endl;
    for (int i = 0; i < 10000; i++) {
        if (numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            cout << "Size: " << numbers.size() << endl;
            cout << "Capacity: " << capacity << endl;
        }
        numbers.push_back(i);
    }

    // can reset capacity but don't need to
    numbers.clear(); // numbers.resize(0); does sort of the same thing. cuts off the end
    // numbers.reserve(100000); // will ? supposed to increaze capacity
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << capacity << endl;

    return 0;
}