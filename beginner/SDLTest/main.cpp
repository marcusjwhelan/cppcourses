#include <iostream>
#include <SDL.h>
using namespace std;

int main() {
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;


    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL init failed" << endl;
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

    if (window == NULL) {
        cout << SDL_GetError() << endl;
        SDL_Quit();
        return 2;
    }

    // PresentVSync sets the refresh rate to the same as the current screen refresh rate;
    // prevents sheering
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);
    SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    if (renderer == NULL) {
        cout << "Could not create renderer" << endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 3;
    }
    if (texture == NULL) {
        cout << "Could not create texture" << endl;
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 4;
    }

    // almost like an int
    Uint32 *buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

    // write pixel info into the buffer
    // memset allows you to set a block of mem with a value
    //memset(buffer, 0x00, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32)); // 255 white or 0xFF
            
    for (int i = 0; i < SCREEN_HEIGHT*SCREEN_WIDTH; i++) {
        buffer[i] = 0xFF0000FF;
    }

    // render white screen
    SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, texture, NULL, NULL);
    SDL_RenderPresent(renderer);

    bool quit = false;
    SDL_Event event;

    while(!quit) {
        // update particles
        // draw particles
        // check for messages/events

        while(SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    delete [] buffer;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}