// Goal -- the goal is an invisible line just to the right of each pipe. The goal
// moves with the pipes. We use the goals to score points -- when the bird intersects
// with the goal, then it has successfully passed the pipe.

#include "MovingThing.h"
#include "Vector2d.h"
#include "PolygonShape.h"
#include "Color.h"
#include "Text.h"

#include "Score.h"
// The goal is a thin rectangle
Score::Score() : Thing(Vector2d(0, 0), new PolygonShape())
{
	// build the polygon
	PolygonShape* polygon = dynamic_cast<PolygonShape*>(shape);

	polygon->addPoint(Vector2d(350, 0));
	polygon->addPoint(Vector2d(450, 0));
	polygon->addPoint(Vector2d(450, 75));
	polygon->addPoint(Vector2d(350, 75));
	polygon->setFill(Color::Transparent);
}

Goal::~Score()
{
	delete shape;
}

void Score::handleCollision(const Thing* other)
{

}
