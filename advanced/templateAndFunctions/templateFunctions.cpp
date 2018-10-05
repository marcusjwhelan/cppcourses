#include <iostream>
using namespace std;


template<class T>   // or template<typename T>
void print(T n) {
    cout << "Template Version: " << n << endl;
}

void print(int value) {
    cout << "Non-tempalte version: " << value << endl;
}

template<class T>
void show() {
    // HAVE TO Have <T> when calling this
    cout << T() << endl;
}

int main() {

    print<string>("Hello");
    print<int>(3);
    print("world");


    print(5);
    print<>(5);

    // __
    show<int>();

    return 0;
}
