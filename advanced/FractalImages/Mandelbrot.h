
#ifndef FRACTALIMAGES_MANDELBROT_H
#define FRACTALIMAGES_MANDELBROT_H


namespace mjw {

class Mandelbrot {
public:
    static const int MAX_ITERATIONS{5000};
public:
    Mandelbrot();
    virtual ~Mandelbrot();
    static int getIterations(double x, double y);
};

}


#endif //FRACTALIMAGES_MANDELBROT_H
