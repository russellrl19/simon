#pragma once

#include "Vector2d.h"
#include "Thing.h"
#include "Board.h"

class BottomLeftGrid : public Thing
{
public:
	BottomLeftGrid();
	~BottomLeftGrid();

	void handleCollision(const Thing* other);
};