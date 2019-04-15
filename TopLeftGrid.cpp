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

	polygon->addPoint(Vector2d(0, 0));
	polygon->addPoint(Vector2d(250, 0));
	polygon->addPoint(Vector2d(250, 250));
	polygon->addPoint(Vector2d(0, 250));
	polygon->setFill(Color::Yellow);
}


TopLeftGrid::~TopLeftGrid()
{
	delete shape;
}