#pragma once
#include<ctime>
#include"Point.hpp"
#include"Map.hpp"
#include"Kmin.hpp"
#include"Snake.hpp"
using namespace km;
using namespace std;

class Snake;

class Item
{
private:
	Point* position;
	char texture;
	Console console;
public:
	Item();
	Item(Point* position, char texture);
	void print();
	Point getPosition();
	void draw();
	void update(Map* map, Snake* snake);
	~Item();
};

