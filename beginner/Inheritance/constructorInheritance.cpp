#include <iostream>
using namespace std;

class Machine {
public:
    Machine(): id(0) { cout << "Machine no-argument constructor called." << endl;}
    Machine(int id): id(id) {cout << "Machine id set" << endl;}
    void info() { cout << "ID: " << id << endl;}

private:
    int id;
};

class Vehicle: public Machine {
public:
    Vehicle(int id): Machine(id) {cout << "Vehicle id set" << endl;}
    Vehicle() { cout << "Vehicle no-argument constructor called." << endl;}
};

class Car: public Vehicle {
public:
    Car(): Vehicle(999) { cout << "Car no-argument constructor called." << endl;}
};

int main() {
    Machine machine(123);
    machine.info();

    Vehicle vehicle(321);
    vehicle.info();

    Car car;
    car.info();
    

    return 0;
}