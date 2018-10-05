#include <iostream>
#include <map>
using namespace std;

// like a lookup table

int main() {

    //key is string, value is an int
    map<string, int> ages; // keys are unique

    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    ages["Mike"] = 70; // overwrites the original Mike because maps are unique

    // pair<string, int> addToMap("Peter", 100); // add a pair to map. that is the type saved in map
    // ages.insert(addToMap);
    // or ages.insert(pair<string, int>("Peter", 100));
    ages.insert(make_pair("Peter", 100));


    // see if element exists
    // cout << ages["Sue"] << endl; // inserts Sue with value 0; dont do
    if (ages.find("Vicky") != ages.end()) {
        cout << "Found Vicky" << endl;
    } else {
        cout << "Key not found" << endl;
    }

    cout << "Mike age " << ages["Mike"] << endl;

    for (auto it = ages.begin(); it != ages.end(); ++it) {
        // type pair is what is saved in a map
        pair<string, int> age = *it;
        cout << age.first << ": " << age.second << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); ++it) {
        // first is the key pointer ref, second is the value pointer ref
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}