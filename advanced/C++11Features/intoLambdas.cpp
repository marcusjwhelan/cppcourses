#include <iostream>
using namespace std;


void test(void (*pFunc)()) {
    pFunc();
}

int main() {

    auto func = [](){ cout << "Hello" << endl; };
    func();

    [](){ cout << "World" << endl; }();

    test(func);

    test([](){ cout << "Again" << endl; });

    return 0;
}