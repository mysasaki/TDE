#pragma once
#include "ofMain.h"
#include "Hero.h"

#define GAME_MENU 0
#define GAME_PLAY 1

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

class GameManager
{
public:
	GameManager(int state);
	~GameManager();

	void Draw();
	int GetGameState();

private:
	//ofImage m_mouse;
	int game_state;
};

