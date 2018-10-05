#include <iostream>
#include <set>
using namespace std;

int main() {
    
    set<int> numbers;

    // only unique values
    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(20);

    for(auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << endl;
    }

    auto itFind = numbers.find(30);
    if (itFind != numbers.end()) {
        cout << "Found: " << *itFind << endl;
    }

    if (numbers.count(30)) { // return 1 or 0
        cout << "Number found." << endl;
    }

    // can do the same thing with classes to make unique items of classes
    // see customeObjasMapKeys

    return 0;
}
