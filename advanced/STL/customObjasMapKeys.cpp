#include <iostream>
#include <map>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // need to make a default constructor
    Person(): name(""), age(0) {}
    // copy constructor
    Person(const Person &other) {
        name = other.name;
        age = other.age;
        cout << "Copy const" << endl;
    }
    Person(string name, int age): name(name), age(age) {}
    void print() const {
        cout << name << ": " << age << flush;
    }

    // NEED THIS TO STORE CLASSES AS KEYS
    // operator overloading. Overloading "<"
    // bool operator "<" (const Person &other) const {
    bool operator<(const Person &other) const { // shouldn't change current object items
        // this lets you insert dif keys
        if (name == other.name) {
            return age < other.age;
        } else {
            return name < other.name;
        }
    }
};


int main() {

    map<Person, int> people;

    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 444)] = 123; // this will update the value in the map
    people[Person("Sue", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); ++it) {
        cout << it->second << ": " << flush;
        // method has to be set as const if Class is used as key
        it->first.print();
        cout << endl;
    }

/*

    map<int, Person> people;

    people[0] = Person("Mike", 40);
    people[1] = Person("Vicky", 30);
    people[2] = Person("Raj", 20);

    people.insert(make_pair(55, Person("Bob", 45))); // this copies the Person into the pair. Then the pair into people

    for (auto it = people.begin(); it != people.end(); ++it) {
        it->second.print();
    }
*/

    
    return 0;
}
