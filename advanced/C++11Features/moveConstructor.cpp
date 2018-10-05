#include <iostream>
#include <ostream>
#include <vector>
#include <memory>
using namespace std;

class Test {
private:
    static const int SIZE = 100;

    // int *m_pBuffer{new int[SIZE]{}}; // or just do here
    int *m_pBuffer{nullptr}; // best practice if not allocating mem
public:
    Test() {
    }

    Test(int i) {
        for (int i = 0; i < SIZE; i++) {
            m_pBuffer[i] = 7*i; // 7 * table
        }
    }

    Test(const Test &other) {
        memcpy(m_pBuffer, other.m_pBuffer, SIZE* sizeof(int));
    }

    // move constructore. takes mutable Rvalue ref .. mutable if no const
    Test(Test &&other) {

        cout << "Move constructor" << endl;
        // steal resource
        // this code has an issue. ->
        /*
         * the destructor of other will dealocate that buffer
         * but we have stolen that buffer
         * we dont want that to happen
         *
         * */
        m_pBuffer = other.m_pBuffer;

        // to fix
        other.m_pBuffer = nullptr; //
    }

    Test &operator=(const Test &other) {
        memcpy(m_pBuffer, other.m_pBuffer, SIZE* sizeof(int));
        return *this;
    }

    ~Test() {
        delete [] m_pBuffer;
    }

    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
    out << "hello from test";
    return out;
}

Test getTest() {
    return Test();
}

int main() {

    vector<Test> vec;
    vec.push_back(Test());

    return 0;
}