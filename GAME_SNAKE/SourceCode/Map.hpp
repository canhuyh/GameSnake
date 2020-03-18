#pragma once
#include<vector>
#include<string>
#include<fstream>
#include"Point.hpp"
#include"Kmin.hpp"
using namespace km;

#define TEXTURE 254
#define WALL_ON 3
#define LOWER_WALL 35
#define LEFT_WALL 18
#define RIGHT_WALL 90

class Map
{
private:
	bool** map;
	/*Point** position;*/
	/*vector<Point*> Position;*/
	//Point* wall_on;
	//Point* lower_wall;
	//Point* left_wall;
	//Point* right_wall;
	int row;
	int col;
	char texture = TEXTURE;
	Console console;
public:
	Map();
	Map(string fileName);
	Map(int row, int col);
	void scan();
	void print();
	bool getElement(int row, int col);
	vector<Point*> getPosition();
	void draw();
	int getRow();
	int getCol();
	bool** getMap();
	~Map();
};

