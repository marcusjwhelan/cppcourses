#ifndef FRACTALIMAGES_BITMAPFILEHEADER_H
#define FRACTALIMAGES_BITMAPFILEHEADER_H

#include <cstdint> // need for in32_t
using namespace std;

#pragma pack(2) // pre processor directive. makes C++ align on 2 byte boundaries
// rather than have extra padding for efficiency. kept in mem exactly the way it is
namespace mjw {
struct BitmapFileHeader {
    // two bites containing the letters B and M. telling the application
    // opening this file saying its a bit map fil
    char header[2]{'B', 'M'};

    // size of final file // need to make sure its 32 bits
    int32_t fileSize;

    // not used. but if necassary i guess
    int32_t reserved{0};

    // how long into the file does the data actually begin
    int32_t dataOffset;
};
}

#endif //FRACTALIMAGES_BITMAPFILEHEADER_H
