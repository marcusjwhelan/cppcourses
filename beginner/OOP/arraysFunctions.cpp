#include <iostream>
using namespace std;

void show1(const int nElements, string texts[]) {
    // cout << sizeof(texts) << endl; // returns size of pointer :(
    for (int i = 0; i < nElements; i++) {
        cout << texts[i] << endl;
    }
}

void show2(const int nElements, string *texts) {
    // cout << sizeof(texts) << endl; // returns size of pointer :(
    for (int i = 0; i < nElements; i++) {
        cout << texts[i] << endl;
    }
}

// if you want to retain size info
void show3(string (&texts)[3]) {
    cout << sizeof(texts) << endl; // returns the right size
    for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {
        cout << texts[i] << endl;
    }
}


/*string *getArray() {
    // Don't return pointers to local variables
    // string texts[] = {"one", "two", "three"};
    return texts[];
}*/

int main() {

    string texts[] = {"apple", "orange", "banana"};
    cout << sizeof(texts) << endl; // returns size of 3 strings
    show1(3, texts);
    show2(3, texts);
    show3(texts);

    return 0;
}
