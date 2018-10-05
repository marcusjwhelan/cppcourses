
#include <complex>
#include "Mandelbrot.h"

using namespace std;

namespace mjw {

Mandelbrot::Mandelbrot() = default;

Mandelbrot::~Mandelbrot() = default;

int Mandelbrot::getIterations(double x, double y) {

    // using complex numbers
    complex<double> z = 0; // overloaded assignment op
    complex<double> c(x, y);

    int iterations = 0;

    while(iterations < MAX_ITERATIONS) {
        z = z*z + c;

        // get magnitude of complex number
        if (abs(z) > 2) {
            break;
        }
        iterations++;
    }

    return iterations;
}

}