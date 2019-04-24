#include "Vector2d.h"
#include "Thing.h"
#include "PolygonShape.h"
#include "Color.h"

#include "Board.h"
#include "BottomLeftGrid.h"


BottomLeftGrid::BottomLeftGrid() : Thing(Vector2d(0, 0), new PolygonShape())
{
	// build the polygon
	PolygonShape* polygon = dynamic_cast<PolygonShape*>(shape);

	polygon->addPoint(Vector2d(0, 350));
	polygon->addPoint(Vector2d(380, 350));
	polygon->addPoint(Vector2d(380, 585));
	polygon->addPoint(Vector2d(0, 585));
	polygon->setFill(Color::Blue);
}


BottomLeftGrid::~BottomLeftGrid()
{
	delete shape;
}

// ignore any collisions
void BottomLeftGrid::handleCollision(const Thing* other)
{
	// intentionally blank
}