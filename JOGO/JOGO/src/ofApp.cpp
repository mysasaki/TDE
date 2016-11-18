#include "ofApp.h"
#include<iostream>

//--------------------------------------------------------------
void ofApp::setup() {
	gameManager = new GameManager(GAME_PLAY);
	gamePlay = new GamePlay(gameManager);
}

//--------------------------------------------------------------
void ofApp::update() {
	switch (gameManager->GetGameState())
	{
		//case GAME_MENU:
	case GAME_PLAY:
		gamePlay->Update(gameManager);
		break;
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	switch (gameManager->GetGameState())
	{
	case GAME_PLAY:
		gamePlay->Draw(gameManager);
		break;
	}
	gameManager->Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
	switch (gameManager->GetGameState())
	{
	case GAME_PLAY:
		gamePlay->MousePressed(ofGetMouseX(), ofGetMouseY(), button);
	}
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
	ofSetWindowShape(WINDOW_WIDTH, WINDOW_HEIGHT);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
