//
//  Particle.hpp
//  spirals
//
//  Created by Greg Brant on 29/04/2016.
//
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include <ofMain.h>

class Particle
{
public:
    void setup(int _x, int _y, int _r);
    void update(float frame);
    void draw();
    
    int x;
    int y;
    int radius;
    
    ofPoint first;
    ofPoint second;
    ofPoint third;
};

#endif /* Particle_hpp */
