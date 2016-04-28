//
//  Particle.hpp
//  openCvFun
//
//  Created by Greg Brant on 28/04/2016.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>


class Particle
{
public:
    
    void setup();
    void update();
    void draw();
    
    int x;
    int y;
    int life;
    int lifetime;
};

#endif /* Particle_hpp */
