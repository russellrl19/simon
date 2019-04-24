#pragma once

#include "Vector2d.h"
#include "Thing.h"
#include "Board.h"

class BottomRightGrid : public Thing
{
public:
	BottomRightGrid();
	~BottomRightGrid();

	void handleCollision(const Thing* other);
};