#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	bool val;
public:
	Point();
	~Point();
	Point(int x, int y);
	void setX(int x);
	int getX() const;
	void setY(int y);
	int getY() const;
	/*void print();*/
	bool operator==(Point point);
	friend ostream& operator<<(ostream& out, const Point& x);
};

