//
// Created by Marcus Whelan on 5/6/18.
//

#ifndef OPERATOROVERLOADING_COMPLEX_H
#define OPERATOROVERLOADING_COMPLEX_H

#include <iostream>
using namespace std;

namespace mjw {
    class Complex {

    private:
        double real;
        double imaginary;
        
    public:
        Complex();
        Complex(double real, double imaginary);
        /**
         * copy constructor
         * @param other
         */
        Complex(const Complex &other);
        /**
         * assignment operator
         * @param other
         * @return
         */
        const Complex &operator=(const Complex &other);

        /**
         * add get methods: sort of breaks encapsulation
         * @return
         */
        double getReal() const {
            return real;
        }
        double getImaginary() const { // set as const so you can call them
            return imaginary;
        }
        /**
         * Operator "==" has to be in the class
         * @param other
         * @return
         */
        bool operator==(const Complex &other) const;
        bool operator!=(const Complex &other) const;

        /**
         * overload "*" operator to be used to get complex' numbers conjugate #
         * (AB)* = B*A*, where A* represents the conjugate transpose of A.
         *
         * @return Complex
         */
        Complex operator*() const;
    };
    /**
     * stream insertion operator
     * @param out
     * @param c
     * @return
     */
    ostream &operator<<(ostream &out, const Complex &c);

    /**
     * overload complex number -> return brand new num
     * @param c1
     * @param c2
     * @return
     */
    Complex operator+(const Complex &c1, const Complex &c2);
    /**
     * overload + addition with double
     * @param c1
     * @param d
     * @return
     */
    Complex operator+(const Complex &c1, double d);
    /**
     * overload for double on the left
     * @param d
     * @param c1
     * @return
     */
    Complex operator+(double d, const Complex &c1);
}


#endif //OPERATOROVERLOADING_COMPLEX_H
