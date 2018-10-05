#include <iostream>
using namespace std;

/* user input */
int main() {
    cout << "Enter your name: " << flush;
    string input; // declaring empty variable
    cin >> input;
    cout << "You entered: " << input << endl;

    cout << "Enter your age: " << flush;
    int value;
    cin >> value;
    cout << "You entered: " << value << endl;


    return 0;
}