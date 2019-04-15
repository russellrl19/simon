// MyLittleGame -- this is the game logic for my little game
#include "Game.h"
#include "Board.h"
#include "TopLeftGrid.h"

// Create game with 800x600 window
Board::Board() : Game("My Board Game", 800, 600)
{
	// any other initialization that is needed
	startLevel();
}

Board::~Board()
{
	// delete anything that was allocated with new in constructor
}

// Called once per frame
void Board::update(double dt)
{
	// any needed game logic goes here
}

void Board::startLevel()
{
}