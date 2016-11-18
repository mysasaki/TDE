#include "GameManager.h"



GameManager::GameManager(int state)
{
	game_state = state;
	//m_mouse.loadImage("images/cursor.png");
}


GameManager::~GameManager()
{
}

void GameManager::Draw()
{
	//m_mouse.draw(ofGetMouseX(), ofGetMouseY());
}

int GameManager::GetGameState()
{
	return game_state;
}
