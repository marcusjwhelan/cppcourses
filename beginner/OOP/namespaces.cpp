#include <iostream>
#include "Dog.h"
#include "Animals.h"
using namespace std;
using namespace mjw;
using namespace dog;

int main() {
    mjw::Dog dog1;
    dog::Dog dog2;

    dog1.speak();
    dog2.speak();
    cout << dog::DOGNAME << endl;
    
    return 0;
}
