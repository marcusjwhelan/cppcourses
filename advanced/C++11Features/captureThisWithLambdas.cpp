#include <iostream>
using namespace std;

class Test {
private:
    int one{1};
    int two = 2;

public:
    void run() {
        int three{3};
        int four = 4;

        // auto pLambda = [&, this]() {}; // no error :D
        // auto pLambda = [=, this]() {}; // error

        // capture this
        auto pLambda = [this, three, four](){
            // if this the instance values are captured by ref
            one = 111;
            cout << one << endl;
            cout << two << endl;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();
    }
};


int main() {

    Test test;
    test.run();

    return 0;
}