#include <iostream>
#include "FractalCreator.h"
#include "Zoom.h"
#include "RGB.h"

using namespace std;
using namespace mjw;

int main() {

    FractalCreator fractalCreator(800, 600);

    fractalCreator.addRange(0.0, RGB(0, 0, 0));
    fractalCreator.addRange(0.1, RGB(255, 0, 255));
    fractalCreator.addRange(0.2, RGB(220, 0, 255));
    fractalCreator.addRange(0.3, RGB(200, 0, 255));
    fractalCreator.addRange(0.4, RGB(180, 0, 255));
    fractalCreator.addRange(0.5, RGB(150, 0, 255));
    fractalCreator.addRange(0.6, RGB(120, 0, 255));
    fractalCreator.addRange(0.7, RGB(100, 0, 255));
    fractalCreator.addRange(0.8, RGB(80, 0, 255));
    fractalCreator.addRange(0.9, RGB(50, 0, 255));
    fractalCreator.addRange(1.0, RGB(10, 0, 255));

    fractalCreator.addZoom(Zoom(295, 202, 0.1));
    fractalCreator.addZoom(Zoom(312, 304, 0.1));
    fractalCreator.addZoom(Zoom(309, 36, 0.1));
    fractalCreator.addZoom(Zoom(389, 300, 0.1));
    fractalCreator.addZoom(Zoom(389, 300, 0.1));
    fractalCreator.addZoom(Zoom(48, 550, 0.1));
    fractalCreator.run("test.bmp");

    cout << "Finished" << endl;
    
    return 0;
}