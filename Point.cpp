#include "Point.h"
#include <cmath>

Point::Point()
{
	x = 0; 
	y = 0; 
}
Point::Point (int myX, int myY)// Constructor 
{
	x = myX; 
	y = myY; 
}
Point::Point (const Point& cctor)// copy 
{
	x = cctor.x; 
	y = cctor.y; 
}

void Point::setX(int myX)
{
	x = myX; 
}

void Point::setY(int myY)
{
	y = myY;
}

int Point::getX()
{
	return x; 
}

int Point::getY()
{
	return y;
}

float Point::distance(Point b)
{
	float d = 0; 
	d +=(float) sqrt(pow(x - b.x, 2) + pow(y - b.y, 2));
	return d; 
	// pas besoin de faire x.getx il faut juste faire x puisquil y est avant la fonction 
	//dans lappelation et pas besoin de faire b.getX étant donné que je suis deja 
	//dans la classe donc je peux acceder au donne prive pas besoin du get

}

bool Point::pointegaux(Point b)
{
	if (x == b.x && y == b.y)
		return true;
	else
		return false; 
}

