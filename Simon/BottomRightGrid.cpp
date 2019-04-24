#include "Vector2d.h"
#include "Thing.h"
#include "PolygonShape.h"
#include "Color.h"

#include "Board.h"
#include "BottomRightGrid.h"


BottomRightGrid::BottomRightGrid() : Thing(Vector2d(0, 0), new PolygonShape())
{
	// build the polygon
	PolygonShape* polygon = dynamic_cast<PolygonShape*>(shape);

	polygon->addPoint(Vector2d(420, 350));
	polygon->addPoint(Vector2d(800, 350));
	polygon->addPoint(Vector2d(800, 585));
	polygon->addPoint(Vector2d(420, 585));
	polygon->setFill(Color::Green);
}


BottomRightGrid::~BottomRightGrid()
{
	delete shape;
}

// ignore any collisions
void BottomRightGrid::handleCollision(const Thing* other)
{
	// intentionally blank
}