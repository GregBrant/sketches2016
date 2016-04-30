//
//  Particle.cpp
//  spirals
//
//  Created by Greg Brant on 29/04/2016.
//
//

#include "ofMain.h"
#include "Particle.hpp"


void Particle::setup(int _x, int _y, int _r)
{
    x = _x;
    y = _y;
    radius = _r;
}

void Particle::update(float frame)
{
    float m1 = 0.3;
    float m2 = 1.9;
    float m3 = 6;
    
    first.x = x + cos(frame * m1) * radius;
    first.y = y + sin(frame * m1) * radius;
    
    second.x = first.x + cos(frame * m2) * radius/2;
    second.y = first.y + sin(frame * m2) * radius/2;
    
    third.x = second.x + cos(frame * m3) * radius/3;
    third.y = second.y + sin(frame * m3) * radius/3;
}

void Particle::draw()
{
    // Registration point
    //ofSetColor(255, 100, 20);
    //ofDrawRectangle(x, y, 3, 3);
    
    //ofSetColor(100, 255, 20);
    //ofDrawRectangle(first, 3, 3);
    
    //ofSetColor(20, 100, 255);
    //ofDrawRectangle(second, 3, 3);
    
    ofSetColor(255, 255, 255);
    ofDrawRectangle(third, 3, 3);
}