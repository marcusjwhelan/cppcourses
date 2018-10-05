#ifndef FRACTALIMAGES_RGB_H
#define FRACTALIMAGES_RGB_H

namespace mjw {

struct RGB {
    double r;
    double g;
    double b;
    RGB(double r, double g, double b);
};

RGB operator-(const RGB& first, const RGB& second);
}

#endif
