#include <iostream>
#include <iomanip>
using namespace std;

/* arrays */
int main() {
    int values[1]; // create an array of 3 items.
    values[0] = 88;
    cout << values[0] << endl;

    double numbers[4] = {4.5, 2.3, 7.2, 8.1};
    cout << "Size of numbers array: " << sizeof(numbers)/sizeof(double) << endl;

    /* multi dimensional arrays */
    string animals[2][3] = {
            {"fox", "dog", "cat"},
            {"mouse", "squirrel", "parrot"}
    };
    cout << "Size of multi Dimensional Array: " << sizeof(animals)/sizeof(animals[0]) << endl;
    for (int i=0; i<(sizeof(animals)/sizeof(animals[0])); i++)
    {
        for (int j=0; j<(sizeof(animals[i])/sizeof(string)); j++)
        {
            cout << animals[i][j]<< "\t" << flush;
        }
        cout << endl;
    }

    /* switch */
    int value = 5;
    switch (value) {
        case 4:
            cout << "value is 4." << endl;
            break;
        case 5:
            cout << "value is 5." << endl;
            break;
        default:
            cout << "unrecognized value" << endl;
    }

    return 0;
}