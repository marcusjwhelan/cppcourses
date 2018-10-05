#include <iostream>
#include <limits> // get sizes and stuff
#include <iomanip> // input output manipulation. stop scientific notation
using namespace std;

int main() {
    cout << "Max int value: " << INT_MAX << endl;
    cout << "Min int value: " << INT_MIN << endl;

    long int lValue = 29494930202933;
    cout << lValue << endl;

    short int sValue = 32764;
    cout << sValue << endl;

    cout << "Size of long int: " << sizeof(lValue) << endl; // get the bytes
    cout << "Size of short int: " << sizeof(sValue) << endl;

    unsigned int uValue = 234533; // only + values

    float fValue = 76.4;
    cout << "Size of float: " << sizeof(fValue) << endl;
    cout << "Fixed scientific notation: " << fixed << fValue << endl;
    cout << "As scientific: " << scientific << fValue << endl;
    cout << "Set precision: " << setprecision(20) << fixed << fValue << endl;

    // more precision
    double dValue = 76.4;
    cout << "Set double precision: " << setprecision(20) << fixed << dValue << endl;
    cout << "Size of double: " << sizeof(dValue) << endl;

    long double lDValue = 123.456789876543210;
    cout << "Set long double precision: " << setprecision(20) << fixed << lDValue << endl;
    cout << "Size of long double: " << sizeof(lDValue) << endl;


    // booleans
    bool btValue = true;
    bool bfValue = false;
    cout << btValue << endl; // 1
    cout << bfValue << endl; // 0

    char cValue = '7'; // to get ascii value
    cout << (int)cValue << endl; // get 55 which is the ascii value 7

    cout << "Size of char: " << sizeof(char) << endl; // 128 -> -127

    wchar_t wValue = 'i'; // for representing a greater range of characters
    cout << (char)wValue << endl; // to get i back.
    cout << "Size of wchar_t: " << sizeof(wValue) << endl;

    return 0;
}