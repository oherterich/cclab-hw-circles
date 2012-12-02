#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetCircleResolution(80);
    ofSetBackgroundColor(0, 0, 0);
    ofEnableSmoothing();
    
    for (int i=0; i< NUMCIRCLES; i++) {
        
        int posX = ofRandom(0, ofGetWidth());
        int posY = ofRandom(0, ofGetHeight());
        int size = ofRandom(5, 30);
        int shade = ofRandom(100,200);
        int speedX = ofRandom(4,10);
        int speedY = ofRandom(4,10);
        
        myCircles[i].setup(posX, posY, size, shade, speedX, speedY);
        
    }
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i=0; i< NUMCIRCLES; i++) {
        myCircles[i].update();
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofEnableAlphaBlending();
    
    for (int i=0; i< NUMCIRCLES; i++) {
        
        if (i != 0) {
            myCircles[i].draw(myCircles[i-1].posX, myCircles[i-1].posY);
        }
        
        else myCircles[i].draw(myCircles[NUMCIRCLES].posX, myCircles[NUMCIRCLES].posY);
        
    }
    
    ofDisableAlphaBlending;

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

    for (int i=0; i< NUMCIRCLES; i++) {
        
        myCircles[i].mouseMoved(x,y);
        
    }

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}