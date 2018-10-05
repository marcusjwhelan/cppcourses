#include <iostream>
using namespace std;


// base class/struct
struct Test {
    virtual bool operator()(string &text) = 0;
    virtual ~Test(){};
};

/**
 * functor
 * Class or struct
 * that overloads the () operator
 */
struct MatchTest: public Test {
    // overload the round brackets operator like main"()"
    bool operator()(string &text) {
        return text == "lion";
    }
};

void check(string text, Test &test) {
    if (test(text)) {
        cout << "text matches" << endl;
    } else {
        cout << "text does not match" << endl;
    }
}


/**
 * sort of an alternative to function pointers
 * c++ 11 has lambdas which are nicer than functors
 * @return
 */
int main() {

    MatchTest pred;
    string value = "lion";

    cout << pred(value) << endl;

    MatchTest m;
    check("lion", m);

    return 0;
}
