// MyLittleGame -- this is the game logic for my little game
#include "Game.h"
#include "Board.h"
#include "TopLeftGrid.h"
#include "TopRightGrid.h"
#include "BottomLeftGrid.h"
#include "BottomRightGrid.h"
#include "glut.h"
#include "glut32.dll"

#include <cstdlib>


// Create game with 800x600 window
Board::Board() : Game("My Board Game", 800, 600) {
	// any other initialization that is needed
	startLevel();
}

Board::~Board() {
	// delete anything that was allocated with new in constructor
}

// Called once per frame
void Board::update(double dt) {
	// any needed game logic goes here
}

//void Board::glutMouseFunc(void(*mousepress)(int button, int state, double x, double y)) {}

int Board::mousepress(int button, double x, double y) {
	if (button == GLUT_LEFT_BUTTON) {

		mouse_x = x;
		mouse_y = y;

		mouse_y = WINDOWSIZE - mouse_y;

		if (mouse_x <= 0 && mouse_y >= 0) {
			return 0;
		}
		else if (mouse_x >= 0 && mouse_y >= 0) {
			return 1;
		}
		else if (mouse_x <= 0 && mouse_y <= 0) {
			return 2;
		}
		else if (mouse_x >= 0 && mouse_y <= 0) {
			return 3;
		}
	}
	glutPostRedisplay();
}

void Board::addNumSequence() {
	int numToAdd = rand() % 4;

	sequence.push_back(numToAdd);
}

void Board::selected(int colorSelected) {
	user.push_back(colorSelected);
}

void Board::compare() {
	for (int i = 0; i < sequence.size(); i++) {
		if (sequence.at(i) == user.at(i)) {

		}
		else {
			//end game
		}
	}

	//continue game
}


void Board::startLevel() {
	new	TopLeftGrid();
	new TopRightGrid();
	new BottomLeftGrid();
	new BottomRightGrid();
}