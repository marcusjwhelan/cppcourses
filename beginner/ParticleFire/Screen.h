//
// Created by Marcus Whelan on 5/3/18.
//

#ifndef PARTICLEFIRE_SCREEN_H
#define PARTICLEFIRE_SCREEN_H

#include <SDL.h>
#include <iostream>
using namespace std;

namespace mjw {
    class Screen {
    public:
        const static int SCREEN_WIDTH = 800;// 800
        const static int SCREEN_HEIGHT = 600;// 600
    private:
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer1;
        Uint32 *m_buffer2;

    public:
        Screen();
        bool init();
        void update();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
        bool processEvents();
        void close();
        void clear();
        void boxBlur();
    };
}


#endif //PARTICLEFIRE_SCREEN_H
