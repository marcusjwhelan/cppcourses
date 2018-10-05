#include <iostream>
using namespace std;

/* Strings */
int main() {
    // String is a class -> like an object
    string text1 = "Hello ";
    string text2 = "Fred";

    string text3 = text1 + text2;  // concat

    cout << text3 << endl;

    return 0;
}