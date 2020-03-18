#include "Point.hpp"


Point::Point()
{
	this->x = 0;
	this->y = 0;
	this->val = 0;
}


Point::~Point()
{
}

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
	this->val = 0;
}

void Point::setX(int x)
{
	this->x = x;
}

int Point::getX() const
{
	return this->x;
}

void Point::setY(int y)
{
	this->y = y;
}

int Point::getY() const
{
	return this->y;
}

//
//void Point::print()
//{
//	cout << "(" << this->x << "," << this->y << ")";
//}

bool Point::operator==(Point point)
{
	if (this->x == point.x && this->y == point.y)
		return true;
	return false;
}

ostream& operator<<(ostream& out,const Point& x)
{
	out << "(" << x.x << "," << x.y << ")";
	return out;
}