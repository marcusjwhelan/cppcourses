//
// Created by Marcus Whelan on 5/3/18.
//

#ifndef PARTICLEFIRE_SWARM_H
#define PARTICLEFIRE_SWARM_H

#include "Particle.h"

namespace mjw {
    class Swarm {
    public:
        const static int NPARTICLES = 5000;

    private:
        Particle *m_pParticles;
        int lastTime;

    public:
        Swarm();
        virtual ~Swarm();
        void update(int elapsed);
        const Particle * const getParticles() { return m_pParticles; };
    };
}


#endif //PARTICLEFIRE_SWARM_H
