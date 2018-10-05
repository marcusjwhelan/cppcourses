#include <iostream>
#include <Cat.h>
using namespace std;

int main() {
    mjw::saySomething();
    mjw::Cat bob;
    bob.speak();
    cout << "Hello, World!" << endl;
    return 0;
}