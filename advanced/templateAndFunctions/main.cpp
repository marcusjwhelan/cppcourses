#include <iostream>
using namespace std;

/**
 * make template class
 */
template<class T, class K>
class Test {
private:
    T obj;

public:
    Test(T obj) {
        this->obj = obj;
    }
    void print() {
        cout << obj << endl;
    }
};

int main() {

    Test<string, int> test1("Hello");
    test1.print();

    return 0;
}