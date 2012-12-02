#include "circle.h"

Circle::Circle(){

    int posX;
    int posY;
    int size;
    
    int shade;
    
    int speedX;
    int speedY;

}

//--------------------------------------------------------------
void Circle::setup(int _posX, int _posY, int _size, int _shade, int _speedX, int _speedY){
    
    posX = _posX;
    posY = _posY;
    size = _size;
    shade = _shade;
    speedX = _speedX;
    speedY = _speedY;
    
}

//--------------------------------------------------------------
void Circle::update(){
    collide();
    
    posX+=speedX;
    posY+=speedY;
}

//--------------------------------------------------------------
void Circle::draw(int x, int y){
    
    ofSetColor(shade, shade, shade, 100);
    
    ofCircle(posX, posY, size);
    
    ofLine(x, y, posX, posY);
    
}

//--------------------------------------------------------------
void Circle::mouseMoved(int x, int y ){
    
    mapSize(x, y);
    
}

void Circle::mapSize(int x, int y) {
    
    int distance = ofDist(posX, posY, x, y);
    
    size = ofMap(distance, 0, 200, -30, 30);
    
}

void Circle::collide() {
    
    if (posX >= ofGetWidth() || posX <= 0) {
        speedX = -speedX;
    }
    
    if (posY >= ofGetHeight() || posY <= 0) {
        speedY = -speedY;
    }
    
}