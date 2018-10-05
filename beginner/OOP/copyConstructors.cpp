#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    Animal() {cout << "Animal Created." << endl;};
    // explicit copy constructor
    // copy the fields of the "other" animal. right of the = sign to the new Animal
    // const Animal& means reference the incoming Animal. Cant change the old animals info
    // can only call const methods on the old reference animal. Const methods can't alter instance
    // variables
    Animal(const Animal& other): name(other.name) { cout << "Animal created by copying." << endl; };
    void setName(string name) {this->name = name;};
    void speak() const {cout << "My name is: " << name << endl;};
};

int main() {
    Animal animal1;
    animal1.setName("Freddy");

    Animal animal2 = animal1; // implicitly applying the copy constructor
            // or you can use teh explicit constructor as seen above in the class
    animal2.speak();
    animal2.setName("Bob");
    animal1.speak();
    animal2.speak();

    // another way to call copy constructor
    Animal animal3(animal1);
    animal3.speak();


    return 0;
}