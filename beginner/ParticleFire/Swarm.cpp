//
// Created by Marcus Whelan on 5/3/18.
//

#include "Swarm.h"

namespace mjw {

    Swarm::Swarm(): lastTime(0) {
        m_pParticles = new Particle[NPARTICLES];
    }

    Swarm::~Swarm() {
        delete [] m_pParticles;
    }

    void Swarm::update(int elapsed) {
        int interval = elapsed - lastTime;
        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            m_pParticles[i].update(interval);
        }
        lastTime = elapsed;
    }
}