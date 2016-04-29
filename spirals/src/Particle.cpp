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
    float c = cos(frame);
    float rc = c * radius;
    float xrc = x + rc;
    
    cout << "f:   " << frame << endl;
    cout << "c:   " << c << endl;
    cout << "rc:  " << rc << endl;
    cout << "xrc: " << xrc << endl;
    
    
    first.x = xrc;
    first.y = y + (sin(frame) * (double)radius);
}

void Particle::draw()
{
    // Registration point
    ofSetColor(255, 100, 20);
    ofDrawRectangle(x, y, 1, 1);
    
    ofSetColor(100, 255, 20);
    ofDrawRectangle(first, 1, 1);
}