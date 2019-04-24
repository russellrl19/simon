#pragma once

#include "Vector2d.h"
#include "Thing.h"
#include "Board.h"

class TopLeftGrid : public Thing
{
public:
	TopLeftGrid();
	~TopLeftGrid();

	void handleCollision(const Thing* other);
};