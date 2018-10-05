#include <iostream>
using namespace std;

class Parent {
    int dogs{1};
    string text{"WOO"};
public:
    /*Parent() {
        dogs = 5;    C++98    keep commented out
        cout << "No Parameter parent constructor" << endl;
    }*/

    // c++11
    Parent(): Parent("Hello") {    // delegating constructor     .. cant have recursion
        dogs = 5;
        cout << "No Parameter parent constructor" << endl;
    }

    Parent(string text) { // bc no recursion don't have this constructor call the default infi loop
        dogs = 5;
        // this->text = text; C++98 init
        cout << "string parent constructor" << endl;
    }
};

class Child: public Parent {
public:
    /*Child(): Parent("hello!") { // specify the default constructor
        C++ 98
    }*/
    Child() = default;
};

int main() {
    /*Parent parent("World");   C++98
    Child child;*/
    Parent parent("hello");
    Child child;
    return 0;
}