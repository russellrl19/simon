#include "Vector2d.h"
#include "Thing.h"
#include "PolygonShape.h"
#include "Color.h"

#include "Board.h"
#include "TopRightGrid.h"


TopRightGrid::TopRightGrid() : Thing(Vector2d(0, 0), new PolygonShape())
{
	// build the polygon
	PolygonShape* polygon = dynamic_cast<PolygonShape*>(shape);

	polygon->addPoint(Vector2d(420, 75));
	polygon->addPoint(Vector2d(800, 75));
	polygon->addPoint(Vector2d(800, 310));
	polygon->addPoint(Vector2d(420, 310));
	polygon->setFill(Color::Red);
}


TopRightGrid::~TopRightGrid()
{
	delete shape;
}

// ignore any collisions
void TopRightGrid::handleCollision(const Thing* other)
{
	// intentionally blank
}