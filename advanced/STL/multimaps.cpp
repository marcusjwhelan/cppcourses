#include <iostream>
#include <map>
using namespace std;

int main() {

    // can have duplicate keys
    multimap<int, string> lookup;

    // does not have overloaded subscript operator
    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Vicky"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(20, "Bob"));

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    cout << "----------------" << endl;

    // get range of them
    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);
    for (auto it = its.first; it != its.second; ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    // this is pooop
    /*for (auto it = lookup.find(20); it != lookup.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }*/

    return 0;
}