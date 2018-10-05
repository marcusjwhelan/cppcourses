//
// Created by Marcus Whelan on 5/3/18.
//

#ifndef PARTICLEFIRE_PARTICLE_H
#define PARTICLEFIRE_PARTICLE_H

namespace mjw {

    struct Particle { // only diff from class. is by default the doubles are public
        double m_x;
        double m_y;

    private:
        double m_speed;
        double m_direction;

    private:
        void init();

    public:
        Particle();
        virtual ~Particle();
        void update(int interval);
    };
}

#endif //PARTICLEFIRE_PARTICLE_H
