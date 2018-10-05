#include <iostream>
using namespace std;

class Frog {
public:
    Frog(string name): name(name) {};
    void info() {cout << "My name is: " << getName() << endl;}

private:
    string name;

private:
    string getName() {return name;};
};

int main() {

    Frog frog("Freddy");
    frog.info();

    return 0;
}