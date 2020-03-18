#pragma once
#include<iostream>
#include<vector>
#include<ctime>
#include "Point.hpp"
#include"Kmin.hpp"
#include"Map.hpp"
#include"Item.hpp"

using namespace std;

#define GO_UP 1
#define GO_DOWN 2
#define GO_LEFT 3
#define GO_RIGHT 4

class Item;

class Snake
{
private:
	vector<Point*> body;
	km::Console console;
	Point* tmpp;
	int direction = GO_RIGHT;
public:
	Snake();
	~Snake();
	Snake(int size);
	Snake(vector<Point*> point);
	Snake(const Snake& snake); 
	//void setVal(int val);
	//int getVal();
	vector<Point*> setBody();
	int setSize();
	void print();
	void control();
	bool die();
	bool checkCollision(Snake snake);
	bool checkCollision(Item* item);
	bool checkCollision(Map* map);
	void draw();
	void updateEvent();
	void updateSnake();
	friend ostream& operator<<(ostream& out, const Snake& x);
};

