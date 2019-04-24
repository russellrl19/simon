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

private:
	//used this website to solve error for vector not being a template:
	//https://stackoverflow.com/questions/16704090/vector-is-not-a-template
	std::vector<int> sequence;
	std::vector<int> user;

	void startLevel();

	void addNumSequence();
	void selected(int colorSelected);

	void compare();
};