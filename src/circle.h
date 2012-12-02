#pragma once

#include "ofMain.h"

class Circle : public ofBaseApp{
    
public:
    
    Circle();
    void setup(int posX, int posY, int size, int shade, int speedX, int speedY);
    void update();
    void draw(int x, int y);
    
    void mouseMoved(int x, int y );
    
    void mapSize(int x, int y);
    void collide();
    
    int posX;
    int posY;
    int size;
    int shade;
    int speedX;
    int speedY;
    
};
