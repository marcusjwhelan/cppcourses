#ifndef FRACTALIMAGES_FRACTALCREATOR_H
#define FRACTALIMAGES_FRACTALCREATOR_H

#include <iostream>
#include <string>
#include <cstdint>
#include <memory>
#include <cmath>
#include <vector>
#include "Mandelbrot.h"
#include "Zoom.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"

namespace mjw {

class FractalCreator {
private:
    int m_width{0};
    int m_height{0};
    int m_total{0};
    // don't exceed array bounds.
    unique_ptr<int[]> m_histogram;
    unique_ptr<int[]> m_fractal;
    Bitmap m_bitmap;
    ZoomList m_zoomList;

    vector<int> m_ranges;
    vector<RGB> m_colors;
    vector<int> m_rangeTotals;

    bool m_bGotFirstRange{false};

private:
    void calculateIterations(); // 1st nested loop
    void drawFractal();  // 2nd nested loop
    void calculateRangeTotals();
    void calculateTotalIterations();
    void writeBitmap(std::string name);
    int getRange(int iterations) const;

public:
    FractalCreator(int width, int height);
    void addRange(double rangeEnd, const RGB& rgb);
    void addZoom(const Zoom& zoom);
    virtual ~FractalCreator();
    void run(std::string name);
};

}


#endif
