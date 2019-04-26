// MyLittleGame -- this is the game logic for my little game.
#pragma once

#include "Game.h"
#include <vector>

class Board : public Game
{
public:
	Board();
	~Board();

	void update(double dt);

	int mousepress(int button, double x, double y);
	//void glutMouseFunc(void(*mousepress)(int button, int state, double x, double y));

private:
	std::vector<int> sequence;
	std::vector<int> user;

	void startLevel();

	void addNumSequence();
	void selected(int colorSelected);

	void compare();

	const int WINDOWSIZE = 750;

	double mouse_x = -10.0, mouse_y = -10.0;
};