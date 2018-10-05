#include <iostream>
using namespace std;

// References
void changeSomething(double &value) { // now this is just an alias to the incoming value in mem.
    value = 123.4;
}

// const keyword -> only like this for tutorial
class Animal {
private:
    string name;
public:
    void setName(string name) {this->name = name;}
    void speak() const {cout << "My Name is: " << name << endl;} // cant change instance variables
};


int main() {
    cout << endl;
    cout << "Char Arrays" << endl;
    cout << "===================" << endl;
    cout << endl;

    // char array
    // char text[] = {'h', 'e', 'l', 'l', 'o'};
    char text[] = "hello";
    // cout << text << endl;
    for (int i = 0; i < sizeof(text); i++) {
        cout << "Index: " << i << "; Char: "<< text[i] << endl;
        cout << "Index: " << i << "; Char Int: "<< (int)text[i] << endl; // null terminator is 0;
    }

    int k = 0;
    while(true) {
        if (text[k] == 0) {
            break;
        }
        cout << text[k] << flush;
        k++;
    }

    cout << endl;
    cout << endl;
    cout << "Reversing a String" << endl;
    cout << "===================" << endl;
    cout << endl;

    // reversing a primitive string in place
    char text1[] = "hello";
    cout << text1 << endl;
    int nChars = sizeof(text1) - 1; // # of chars in array except for the null char. 0
    char *pStart = text1; // start of array 'h';
    char *pEnd = text1 + nChars - 1;
    cout << *pStart << endl; // 'h'
    cout << *pEnd << endl; // 'o'
    while (pStart < pEnd) { // can compare pointers
        char save = *pStart; // save that char
        // swap
        *pStart = *pEnd; // gets the char of pointer pEnd;
        *pEnd = save; // save the start that was saved to the pEnd;
        // then move pointers
        pStart++;
        pEnd--;
    }

    cout << text1 << endl;

    cout << endl;
    cout << endl;
    cout << "References" << endl;
    cout << "===================" << endl;
    cout << endl;

    int value1 = 8;
    int &value2 = value1; // declared variable as a reference variable. now it is an alias for value1
    value2 = 10; // value2 is not an actual place in mem. its just pointing to value 1

    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;

    double value = 4.321;
    changeSomething(value);
    cout << value << endl; // 123.4

    cout << endl;
    cout << endl;
    cout << "The 'const' Keyword" << endl;
    cout << "===================" << endl;
    cout << endl;

    const double PI = 3.141592;
    cout << PI << endl;

    Animal animal;
    animal.setName("Freddy");
    animal.speak();

    int Value = 8;
    // const int *pValue = &Value;
    int * const pValue = &Value;

    // if this errors on both types of changes below
    // const int * const pValue = &Value;

    cout << *pValue << endl; // 8
    // change pointer variable
    int number = 11;

    // error here if ->  int * const pValue = &Value;
    // pValue = &number; // changing pointer to point at something else. pValue = 11 now;

    // error here if -> const int *pValue = &Value;
    *pValue = 12; // change the value the pointer points to. cant do if const. but *pValue = 12; now

    cout << *pValue << endl; // 12


    return 0;
}