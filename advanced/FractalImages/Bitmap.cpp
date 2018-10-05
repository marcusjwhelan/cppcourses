
#include <fstream>
#include "Bitmap.h"
#include "BitmapFileHeader.h"
#include "BitmapInfoHeader.h"

using namespace std;
using namespace mjw;

namespace mjw {

Bitmap::Bitmap(int width, int height): m_width(width), m_height(height), m_pPixels(new uint8_t[width*height*3]()) {
    // could write code to catch if new fails to allocate mem!!
    // init m_pPixels to 0s with the () at the end

}

void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
    uint8_t *pPixel = m_pPixels.get(); //can't use smart pointer m_pPixels
    // move to point to correct pixels
    // adding 1 would move it by one byte

    // number of bytes in all the rows before the one we are
    // interested in. Once pointing at the right row move to
    // the right column.
    // but since we are using 3 bytes we have to multiply x and y by 3
    pPixel += (y*3) * m_width + (x*3);

    // then array subscript operators to set the rgb color that this
    // pixel points at
    pPixel[0] = blue;
    pPixel[1] = green;
    pPixel[2] = red;
}

bool Bitmap::write(string filename) {
    BitmapFileHeader fileHeader;
    BitmapInfoHeader infoHeader;

    auto const sizeofHeader = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);
    fileHeader.fileSize = sizeofHeader + (m_width * m_height * 3);
    fileHeader.dataOffset = sizeofHeader;

    // info about bitmap
    infoHeader.width = m_width;
    infoHeader.height = m_height;

    // write bitmap
    ofstream file;
    file.open(filename, ios::out|ios::binary);

    if (!file) {// cant open
        return false;
    }

    // write data
    file.write((char *)&fileHeader, sizeof(fileHeader));
    file.write((char *)&infoHeader, sizeof(infoHeader));
    // cannot cast (char *) to unique pointer mPixels
    // .get() gives a normal pointer to the underlying data :D
    file.write((char *)m_pPixels.get(), m_width*m_height*3);

    file.close();

    if (!file) { // failed to close
        return false;
    }

    return true;
}

Bitmap::~Bitmap() {

}

}