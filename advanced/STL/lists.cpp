#include <iostream>
#include <list>
using namespace std;

int main() {

    // list contains a bunch of nodes which are linked to eachother via a pointer
    // like elixer -> [1 -> [2 -> [3]]]; can't use indexes

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);  // just as effecient

    // add elements
    auto it = numbers.begin();
    ++it;
    numbers.insert(it, 100);
    cout << "Element: " << *it << endl;

    // remove elements
    // instead of auto can use list<int>::iterator -> more verbose
    auto eraseIt = numbers.begin();
    ++eraseIt;
    eraseIt = numbers.erase(eraseIt); // this invalidates the iterator, returns a valid iterator
    cout << "Element: " << *eraseIt << endl; // 1 not 100 now.

    for (auto it = numbers.begin(); it != numbers.end();) {
        // add before
        if (*it == 2) {
            numbers.insert(it, 1234);
        }
        // remove current
        if (*it == 1) {
            it = numbers.erase(it); // this incriments so no need to ++ again in for loop
        } else {
            it++;
        }
    }

    // have to use iterator
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
