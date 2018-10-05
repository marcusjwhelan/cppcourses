#include <iostream>
#include <memory> // needed for shared and unique pointers
using namespace std;

class Test{
public:
    Test() {
        cout << "created" << endl;
    }

    void greet() {
        cout << "Hello" << endl;
    }

    ~Test() {
        cout << "destroy" << endl;
    }
};

class Temp {
private:
    // unique_ptr<Test[]> pTestTemp(new Test[2]); // cannot work
    unique_ptr<Test[]> pTestTemp{new Test[2]};
public:
    Temp(): pTestTemp(new Test[2]) {   // same as above

    }
};

int main() {
    // like a smart pointer
    // handles the dealocation of memory for you :D ~~~~~~~~~!!!!


    // template type // knows its a pointer so no * is needed
    unique_ptr<int> pInt(new int);

    // dereference
    *pInt = 7; // auto dealocates

    // now for test to show that it does dealocates
    // cleans up memory when the variable that is being used goes out of scope
    {
        // pre C++ there was auto_ptr -> but is now depricated
        // can use array pointers now :D
        unique_ptr<Test> pTest(new Test);
        unique_ptr<Test[]> pTestArr(new Test[2]);

        Temp temp;
        // auto destroys. now don't need destructor in class for that pointer in private

        pTest->greet();
        pTestArr[1].greet();
    }

    // then auto dealocatess :D

    cout << "Finished" << endl;


    return 0;
}