#include <iostream>
using namespace std;

/* variables */
int main() {

    // int -> allocating mem. Store 5 in as an Int value. No decimal
    // is variable -> can change
    int numberCats = 5;
    int numberDogs = 7;
    int numberAnimals = numberCats + numberDogs;

    cout << "Number of cats: " << numberCats << endl;
    cout << "Number of dogs: " << numberDogs << endl;

    cout << "Total number of animals: " << numberAnimals << endl;

    cout << "New dog acquired!" << endl;

    numberDogs++; // or numberDogs = numberDogs + 1;

    cout << "New number of dogs: " << numberDogs << endl;

    return 0;
}

