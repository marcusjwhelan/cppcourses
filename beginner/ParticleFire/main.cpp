#include <iostream>
#include <SDL.h>
#include <cmath>
#include "Screen.h"
#include "Swarm.h"
#include <stdlib.h>
#include <time.h>

using namespace mjw;
using namespace std;

#include <iomanip>

int main() {
    srand(time(NULL));

    Screen screen;
    if (!screen.init()) {
        cout << "Error initialising SDL." << endl;
    }

    Swarm swarm;

    while(true) {
        // update particles
        // draw particles
        int elapsed = SDL_GetTicks();
        
        swarm.update(elapsed);

        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128); // * 0.001 makes the changes smoother
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

        const Particle *const pParticles = swarm.getParticles();

        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle pParticle = pParticles[i];

            int x = (pParticle.m_x + 1) * (Screen::SCREEN_WIDTH / 2);
            int y = pParticle.m_y * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT / 2;
            screen.setPixel(x, y, red, green, blue);
        }

        // blur screen
        screen.boxBlur();

        // Draw the screen
        screen.update();
        // check for messages/events
        if (!screen.processEvents()) {
            break;
        }
    }

    screen.close();

    return 0;
}