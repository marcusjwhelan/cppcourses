#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test {
private:
    string name;

public:
    Test(string name): name(name) {

    }

    ~Test() {

    }

    void print() {
        cout << name << endl;
    }
};

int main() {

    // stack is a last in first out structure: LIFO
    // like stacking plates. and removed a plate from the stack
    stack<Test> testStack;

    // add to stack
    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Sue"));

    /*
     * dont do this to iterate
     *
     * to get obj from stack. don't need a stack if you need to iterate
     * returns a reference to the object in the stack. And copying it. Shallow copy
     * Test &test1 = testStack.top(); // this will get the reference
     * if you pop here then the print wont work becuase that obj is now gone
     * test1.print();
     *
     * pop values off the stack. has no return
     * testStack.pop(); // removes the object and discards it.
     * Test test2 = testStack.top(); // this will copy and then you can pop the object with no worries
     * test2.print(); // next obj
    */

    // show in revers order
    // while(testStack.size() > 0) {
    while(!empty(testStack)) {
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    cout << "--------" << endl;

    // FIFO -> fist item in is the first item out
    queue<Test> testQueue;

    // add to stack
    testQueue.push(Test("Mike"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Sue"));

    while(!empty(testQueue)) {
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }

    return 0;
}