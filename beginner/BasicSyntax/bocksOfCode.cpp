#include <iostream>

// include .h
#include "utils.h"

using namespace std;

/* function */
void showMenu () {
    cout << "Show menu" << endl;
}

int getInput() {
    cout << "Enter selection: " << endl;
    int input;
    cin >> input;
    return input;
}

void processSelection(int input) {
    switch(input) {
        case 1:
            cout << "1" << endl;
            break;
        case 2:
            cout << "2" << endl;
            break;
        case 3:
            cout << "3" << endl;
            break;
        default:
            cout << "not found" << endl;
    }
}

/* headers and prototypes */
// void doSomething(); // prototype in utils.h

int main() {
    // showMenu();
    // int input = getInput();
    // processSelection(input);

    doSomething();
    return 0;
}

void doSomething() {
    cout << "hello" << endl;
}