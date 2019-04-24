#include "Vector2d.h"
#include "Thing.h"
#include "PolygonShape.h"
#include "Color.h"

#include "Board.h"
#include "TopLeftGrid.h"


TopLeftGrid::TopLeftGrid() : Thing(Vector2d(0, 0), new PolygonShape())
{
	// build the polygon
	PolygonShape* polygon = dynamic_cast<PolygonShape*>(shape);

	polygon->addPoint(Vector2d(0, 75));
	polygon->addPoint(Vector2d(380, 75));
	polygon->addPoint(Vector2d(380, 310));
	polygon->addPoint(Vector2d(0, 310));
	polygon->setFill(Color::Yellow);
}


TopLeftGrid::~TopLeftGrid()
{
	delete shape;
}

// ignore any collisions
void TopLeftGrid::handleCollision(const Thing* other)
{
	// intentionally blank
}