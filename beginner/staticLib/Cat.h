#ifndef STATICLIB_CAT_H
#define STATICLIB_CAT_H

namespace mjw {
    void saySomething();

    class Cat {
    public:
        Cat();
        void speak();
        virtual ~Cat();
    };
}

#endif