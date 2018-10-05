#include <iostream>
using namespace std;

int main() {
    string texts[] = {"one", "two", "three"};
    cout << "Size of array: " << sizeof(texts)/sizeof(string) << endl;
    cout << endl;

    string *pTexts = texts;

    for (int i=0; i<sizeof(texts)/sizeof(string); i++) {
        cout << pTexts[i] << " " << flush;
    }

    cout << endl;
    cout << endl;
    cout << "=============" << endl;
    cout << endl;

    for (int i=0; i<sizeof(texts)/sizeof(string); i++, pTexts++) {
        cout << *pTexts << " " << flush;
        // pTexts++; // point to the next block of data in the pointer
    }

    cout << endl;
    cout << endl;
    cout << "=============" << endl;
    cout << endl;

    string *pElement = texts; // or &texts[0];
    string *pEnd = &texts[2]; // more like &(texts[2]). get value and get address in array

    while (true) {
        cout << *pElement << " " << flush;
        if (pElement == pEnd) {
            break;
        }
        pElement++;
    }
    cout << endl;

    return 0;
}