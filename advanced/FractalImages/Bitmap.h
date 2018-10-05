//
// Created by Marcus Whelan on 5/13/18.
//

#ifndef FRACTALIMAGES_BITMAP_H
#define FRACTALIMAGES_BITMAP_H

#include <string>
#include <cstdint>
using namespace std;

namespace mjw {
// allocate mem for bitmap

class Bitmap {
private:
    int m_width{0};
    int m_height{0};
    unique_ptr<uint8_t[]> m_pPixels{nullptr};

public:
    Bitmap(int width, int height);
    void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
    bool write(string filename);
    virtual ~Bitmap();
};

}


#endif //FRACTALIMAGES_BITMAP_H
