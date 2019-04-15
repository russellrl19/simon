// MyLittleGame -- this is the game logic for my little game.
#pragma once

#include "Game.h"

class Board : public Game
{
public:
	Board();
	~Board();

	void update(double dt);

private:
	void startLevel();
};