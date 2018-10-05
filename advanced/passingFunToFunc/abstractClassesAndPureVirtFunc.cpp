#include <iostream>
using namespace std;

/**
 * base abstract class
 * it only takes one pure virtual method to make
 * a class an abstract class.
 * you do not instantiate an abstract class
 */
class Animal {
public:
    // pure virtual method
    virtual void speak() = 0; // notation means no implementation
    virtual void run() = 0;
};

class Dog: public Animal {
public:
    virtual void speak() {
        cout << "Woof!" << endl;
    }
};

class Labrador: public Dog {
public:
    Labrador() {
        cout << "new Labrador" << endl;
    }
    virtual void run() {
        cout << "Labrador running" << endl;
    }
};

/**
 * This works if sending a ref to the test func
 * @param a
 */
void test(Animal &a) {
    a.run();
}


int main() {

    // cant do this now because of Animal Run virtual
    // Dog dog;
    // dog.speak();

    // however child class Labrador can because it implements run
    Labrador lab;
    lab.speak();
    lab.run();

    Labrador labs[5]; // can't do this with animal bc its an abstract

    // but can do this
    Animal *animals[5];
    // can add a child class that implements all the virtual methods
    animals[0] = &lab;
    animals[0]->speak();
    animals[0]->run();

    test(lab);


    return 0;
}
