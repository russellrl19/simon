#pragma once

#include "MovingThing.h"

class Score : public MovingThing
{
public:
	Score();
	~Score();

	void handleCollision(const Thing* other);
};
