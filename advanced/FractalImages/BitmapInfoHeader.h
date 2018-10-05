#ifndef FRACTALIMAGES_BITMAPINFOHEADER_H
#define FRACTALIMAGES_BITMAPINFOHEADER_H

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace mjw {
struct BitmapInfoHeader {
    /**
     * size of this struct. add up all the bytes and you get 40
     */
    int32_t headerSize{40};
    /**
     * set later on. width of bit map
     */
    int32_t width;
    /**
     * set later on. height of bit map
     */
    int32_t height;
    /**
     * ?
     */
    int16_t planes{1};
    /**
     * one byte for each color in the bit map. RGB
     */
    int16_t bitsPerPixel{24};
    /**
     * no need compression right now
     */
    int32_t compression{0};
    /**
     * init the dataSize. will set later.
     */
    int32_t dataSize{0};
    /**
     * ? maybe 2400 bits per pixel?
     */
    int32_t horizontalResolution{2400};
    /**
     * ? maybe 2400 bits per pixel?
     */
    int32_t verticalResolution{2400};
    /**
     * ?
     */
    int32_t colors{0};
    /**
     * ?
     */
    int32_t importantColors{0};
};
}

#endif //FRACTALIMAGES_BITMAPINFOHEADER_H
