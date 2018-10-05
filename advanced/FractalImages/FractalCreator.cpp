#include "FractalCreator.h"
#include <assert.h>

namespace mjw {

void FractalCreator::run(std::string name) {
    calculateIterations();
    calculateTotalIterations();
    calculateRangeTotals();
    drawFractal();
    writeBitmap(name);
}

void FractalCreator::addRange(double rangeEnd, const RGB& rgb) {
    m_ranges.push_back(rangeEnd*Mandelbrot::MAX_ITERATIONS);
    m_colors.push_back(rgb);

    if (m_bGotFirstRange) {
        m_rangeTotals.push_back(0);
    } else {
        m_bGotFirstRange = true;
    }
};

void FractalCreator::addZoom(const Zoom& zoom) {
    m_zoomList.add(zoom);
}

FractalCreator::FractalCreator(int width, int height):
m_width(width), m_height(height),
m_histogram(new int[Mandelbrot::MAX_ITERATIONS]{0}),
m_fractal(new int[m_width * m_height]{0}),
m_bitmap(m_width, m_height), m_zoomList(m_width, m_height)
{
    m_zoomList.add(Zoom(m_width / 2, m_height / 2, 4.0 / m_width));
}

FractalCreator::~FractalCreator() {

}

void FractalCreator::calculateIterations() {
    // Storing # of iterations per pixel and building m_histogram
    for (int y=0; y < m_height; y++) {
        for (int x = 0; x < m_width; x++) {
            pair<double, double> coords = m_zoomList.doZoom(x, y);

            int iterations = Mandelbrot::getIterations(coords.first, coords.second);

            // store the number of iterations for each pixel
            m_fractal[y * m_width + x] = iterations;

            if (iterations != Mandelbrot::MAX_ITERATIONS) {
                m_histogram[iterations]++;
            }
        }
    }
}

void FractalCreator::drawFractal() {
    // get # of iterations for each pixel. drawing code here
    for (int y=0; y < m_height; y++) {
        for (int x = 0; x < m_width; x++) {

            // get info about pixel
            int iterations = m_fractal[y * m_width + x];
            int range = getRange(iterations);
            int rangeTotal = m_rangeTotals[range];
            int rangeStart = m_ranges[range]; // num of iterations at start of range

            RGB& startColor = m_colors[range]; // start color
            RGB& endColor = m_colors[range+1]; // end color
            // calc color diff
            RGB colorDiff = endColor - startColor;


            uint8_t red = 0;
            uint8_t green = 0;
            uint8_t blue = 0;

            if (iterations != Mandelbrot::MAX_ITERATIONS) {
                // add up the # of iteratsion for all the pixels that have
                // less iterations than this one
                int totalPixels = 0;
                for (int i = rangeStart; i <= iterations; i++) {
                    totalPixels += m_histogram[i];
                }

                red = startColor.r + (colorDiff.r * static_cast<double>(totalPixels))/rangeTotal;
                green = startColor.g + (colorDiff.g * static_cast<double>(totalPixels))/rangeTotal;
                blue = startColor.b + (colorDiff.b * static_cast<double>(totalPixels))/rangeTotal;

            }

            m_bitmap.setPixel(x, y, red, green, blue);
        }
    }

}

void FractalCreator::writeBitmap(std::string name) {
    m_bitmap.write(name);
}

int FractalCreator::getRange(int iterations) const {
    int range = 0;

    for (int i = 1; i < m_ranges.size(); i++) {
        range = i;
        if (m_ranges[i] > iterations) {
            break;
        }
    }
    range--;

    // run in debug mode and you will get error messages if it fails
    assert(range > -1);
    assert(range < m_ranges.size());
    return range;
}

void FractalCreator::calculateRangeTotals() {

    int rangeIndex = 0;

    for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
        int pixels = m_histogram[i];

        if (i >= m_ranges[rangeIndex+1]) {
            rangeIndex++;
        }

        m_rangeTotals[rangeIndex] += pixels;
    }
}

void FractalCreator::calculateTotalIterations() {
    for (int i = 0; i< Mandelbrot::MAX_ITERATIONS; i++) {
        m_total += m_histogram[i];
    }
}

}