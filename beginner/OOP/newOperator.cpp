#include <iostream>
using namespace std;

class Animal {
private:
    string name;
public:
    // constructor
    Animal() {
        cout << "Animal created." << endl;
    }

    // copy constructor
    Animal(const Animal& other):
            name(other.name) {
        cout << "Animal created by copyting." << endl;
    }

    // destructor
    ~Animal() {
        cout << "Destructor called" << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    void speak() const {
        cout << "My name is: " << name << endl;
    }
};

// -----------------------------------------------2
// *createAnimal returns a pointer to new Animal
Animal *createAnimal() {
    Animal *pAnimal = new Animal();
    pAnimal->setName("Freda");
    // since saving the pointer to the new animal the animal will
    // not be destroyed once it leaves this scope. so you can return it.
    return pAnimal;
}
// -----------------------------------------------2

int main() {
    // -----------------------------------------------1
   /* Animal *pCat1 = new Animal();// allocates mem explicitly. Mem you manage yourself
    // if made with new. You have to explicitly destroy it.
    // -> .
    pCat1->setName("Freddy");
    pCat1->speak();
    delete pCat1; // EXPLICIT removal*/
    // -----------------------------------------------1

    // -----------------------------------------------2
    /*// pointer frog to the return value of createAnimal
    Animal *pFrog = createAnimal();
    // pointer frog call method on the frog.
    pFrog->speak();
    // DONT FORGET YOU HAVE TO MAKE A DELETE
    delete pFrog;*/
    // -----------------------------------------------2

    int *pInt = new int;
    *pInt = 8;
    cout << *pInt << endl;
    delete pInt;


    Animal *pAnimal = new Animal[10]; // create 10 animals
    pAnimal[5].setName("George");
    pAnimal[5].speak();
    delete [] pAnimal; // tells C++ to delete all the animals that pointer is referencing

    char *pMem = new char[1000]; // 1000 byte char
    delete [] pMem;


    return 0;
}
