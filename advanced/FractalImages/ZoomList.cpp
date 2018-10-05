#include "ZoomList.h"

namespace mjw {

ZoomList::ZoomList(int width, int height): m_width(width), m_height(height) {}

void ZoomList::add(const Zoom& zoom) {
    zooms.push_back(zoom);

    m_xCenter += (zoom.x - m_width / 2)*m_scale; // distance from x from center
    m_yCenter += -(zoom.y - m_height / 2)*m_scale; // distance from x from center
    // calc combined scale
    m_scale *= zoom.scale;
}

/**
 * (x - m_width/2): move cursor to 0,0 position
 * *m_scale: apply scale
 * + m_xCenter: move to center of image
 *
 * @param x
 * @param y
 * @return
 */
std::pair<double, double> ZoomList::doZoom(int x, int y) {
    
    double xFractal = (x - m_width / 2)*m_scale + m_xCenter;
    double yFractal = (y - m_height / 2)*m_scale + m_yCenter;

    return std::pair<double, double>(xFractal, yFractal);
};

}