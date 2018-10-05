
#include <iostream>
using namespace std;

int main() {

    // gotchas
    double value1 = 7/2; // 3. always discards remainder
    double value2 = 7.0/(double)2; // works;
    cout << value2 << endl;

    int value3 = (int)7.3;
    cout << value3 << endl;

    int value4 = 8;
    value4 += 1;
    cout << value4 << endl;

    int value5 = 10;
    value5 /= 5;
    cout << value5 << endl;

    cout << endl;
    cout << "==============" << endl;
    cout << endl;
    
    // pointer arithmetic
    const int N_Strings = 5;
    string texts[N_Strings] = {"one", "two", "three", "four", "five"};

    // points to the first element in the array
    string *pTexts = texts;
    cout << *pTexts << endl; // dereference and print

    // addition with pointers
    pTexts += 3;
    cout << *pTexts << endl; // now prints "four"

    pTexts -= 2;
    cout << *pTexts << endl; // "two"

    string *pEnd = &texts[N_Strings]; // should be the the last element
    pTexts = &texts[0];

    while(pTexts != pEnd) {
        cout << *pTexts << endl;
        pTexts++;
    }

    // restart
    pTexts = &texts[0];
    long elements = (long)(pEnd - pTexts); // pointers are longs
    cout << elements << endl; // get number of elements in array

    // pointer to the middle of array
    pTexts = &texts[0];
    pTexts += N_Strings/2;
    cout << *pTexts << endl; // "three" gets middle of array

    return 0;
}