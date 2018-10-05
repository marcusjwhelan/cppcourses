#include <iostream>
#include <iomanip>
using namespace std;

/* while loop */
/*
int main() {
    int i = 0;
    while(i < 5) {
        cout << "hello" << i << endl;
        i++;
    }
    const string password = "hello";
    string input;
    do {
        cout << "Enter your password > " << flush;
        cin >> input;
        if (input != password) {
            cout << "Access denied" << endl;

        }

    } while(input != password);
    cout << "Password accepted" << endl;
    return 0;
}*/

/* for loops */
int main() {

    for (int i = 0; i < 10 ; i++) {
        if (i == 5) {
            continue;
        } else if (i == 9) {
            break;
        }
        cout << i << endl;

    }

    return 0;
}
