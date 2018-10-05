#include <iostream>
#include <memory>
using namespace std;

class Test {
private:
    static const int SIZE = 100;

    int *m_pBuffer{new int[SIZE]{}}; // or just do here
public:
    Test() {
        cout << "constructor" << endl;
        // allocate mem for buffer
        // m_pBuffer = new int[SIZE];

        // early ways to set buffer to all 0s
        // memset(m_pBuffer, 0, sizeof(int)*SIZE); // prone to introduce bugs

        // Better way to set buffer filled to all 0s. good to do for init
        // m_pBuffer = new int[SIZE]{};
        
    }

    Test(int i) {
        cout << "parameterized constructor" << endl;

        for (int i = 0; i < SIZE; i++) {
            m_pBuffer[i] = 7*i; // 7 * table
        }
    }

    Test(const Test &other) {
        cout << "copy constructor" << endl;

        // memory lib used here
        // like m_pBuffer = other.m_pBuffer of size seen below
        memcpy(m_pBuffer, other.m_pBuffer, SIZE* sizeof(int));
    }

    Test &operator=(const Test &other) {
        cout << "assignment" << endl;

        // shouldn't get any mem leaks
        memcpy(m_pBuffer, other.m_pBuffer, SIZE* sizeof(int));
        return *this;
    }

    ~Test() {
        cout << "destructor" << endl;

        delete [] m_pBuffer;
    }
};

int main() {
    Test test1;
    Test test2 = test1;
    Test test3;


    test3 = test2;

    return 0;
}