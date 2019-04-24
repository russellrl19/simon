#pragma once

#include "Vector2d.h"
#include "Thing.h"
#include "Board.h"

class TopRightGrid : public Thing
{
public:
	TopRightGrid();
	~TopRightGrid();

	void handleCollision(const Thing* other);
};