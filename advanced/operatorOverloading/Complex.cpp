//
// Created by Marcus Whelan on 5/6/18.
//

#include "Complex.h"

namespace mjw {
    /**
     * overload <<
     * @param out
     * @param c
     * @return
     */
    ostream &operator<<(ostream &out, const Complex &c) {
        out << "(" << c.getReal() << "," << c.getImaginary() << ")";
        return out;
    }
    /**
     * overload + for (complex + complex)
     * @param c1
     * @param c2
     * @return
     */
    Complex operator+(const Complex &c1, const Complex &c2) {
        return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
    }
    /**
     * overload + for (Complex + double)
     * @param c1
     * @param d
     * @return 
     */
    Complex operator+(const Complex &c1, double d) {
        return Complex(c1.getReal() + d, c1.getImaginary());
    }
    /**
     * overload + for (double + Complex)
     * @param d
     * @param c1
     * @return
     */
    Complex operator+(double d, const Complex &c1) {
        return Complex(c1.getReal() + d, c1.getImaginary());
    }
    /**
     * Overload * to get complex conjugate of imaginary #
     *
     * @return
     */
    Complex Complex::operator*() const {
        return Complex(real, -imaginary);
    }


    Complex::Complex(): real(0), imaginary(0){

    }
    Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary) {

    }

    /**
     * Copy constructor
     * @param other
     */
    Complex::Complex(const Complex &other) {
        real = other.real;
        imaginary = other.imaginary;
    }
    /**
     * Overload for (Complex = Complex)
     * @param other
     * @return
     */
    const Complex &Complex::operator=(const Complex &other){
        real = other.real;
        imaginary = other.imaginary;
        return *this;
    }
    /**
     * Overload for (Complex == Complex)
     * @param other
     * @return
     */
    bool Complex::operator==(const Complex &other) const {
        return (real == other.real) && (imaginary == other.imaginary);
    }
    /**
     * Overload for (Complex != Complex)
     * @param other
     * @return
     */
    bool Complex::operator!=(const Complex &other) const {
        return !(*this==other);
    }
}
