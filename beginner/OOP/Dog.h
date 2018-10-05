#include <iostream>
using namespace std;

#ifndef OOP_DOG_H
#define OOP_DOG_H

namespace dog {
    const string DOGNAME = "Freddy";
    class Dog {
    public:
        Dog();
        virtual ~Dog();
        void speak();
    };

}

#endif //OOP_DOG_H
