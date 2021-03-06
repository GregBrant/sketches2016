#include "stdio.h"
#include "ofMain.h"
#include "ofApp.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    save = false;
    // Video setup
    savename = ofGetTimestampString();
    createDir(savename);
    
    ofSetFrameRate(60);
    //ofSetVerticalSync(true);
    
    // Scene setup
    ofSetBackgroundAuto(false);
    ofBackground(100);
    particle.setup(ofGetWidth() / 2, ofGetHeight() / 2, 100);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(save)
    {
        int f = ofGetFrameNum();
        ofSaveScreen(savename + "/" + ofToString(f) + ".png");
    }
    
    
    frameNum ++;
    float frame = ofGetElapsedTimef();
    particle.update(frame);
}

//--------------------------------------------------------------

void ofApp::draw()
{
    if(ofGetFrameNum() % 4 == 0)
    {
        ofSetColor(50, 1);
        ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());
    }
    
    particle.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 's')
    {
        int f = ofGetFrameNum();
        ofSaveScreen(savename + "/" + ofToString(f) + ".png");
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

void ofApp::createDir(string path)
{
    ofDirectory dir(path);
    if(!dir.exists()){
        dir.create(true);
    }
}
