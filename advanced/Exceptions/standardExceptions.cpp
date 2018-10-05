#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *pMem = new char[99999999999999999];
        delete [] pMem;
    }
};

int main() {
    
    try {
        CanGoWrong wrong;
    } catch(bad_alloc &e) { // if object catch ref
        cout << "Caught Exception: " << e.what() << endl;
    }
    cout << "Still running" << endl;

    return 0;
}