#include <iostream>
#include <vector>
using namespace std;

int main() {
    // template class
    vector<string> strings; // could set to strings(5)

    // mem handled for you
    strings.emplace_back("one"); // course -> strings.push_back("one");
    strings.emplace_back("two");
    strings.emplace_back("three");


    // strings[3] = "dog";
    // cout << strings[3] << endl;

    cout << strings[1] << endl;

    cout << strings.size() << endl; // get # of array items

    // old
    for (int i = 0; i < strings.size(); i++) {
        cout << strings[i] << endl;
    }
    cout << "--------------------" << endl;

    // recommended
    // vector<string>::iterator it = strings.begin(); // declare iterator; overloads teh * operator;
    // it++; // goes to next item;
    // cout << *it << endl;
    for (vector<string>::iterator it = strings.begin(); it != strings.end(); ++it) {
        cout << *it << endl;
    }



    return 0;
}