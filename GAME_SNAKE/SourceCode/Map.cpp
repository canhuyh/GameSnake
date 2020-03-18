#include "Map.hpp"


Map::Map()
{
	map = NULL;
}

Map::Map(string fileName)
{
	//for (int i = LEFT_WALL; i < RIGHT_WALL; i++)
	//{
	//	wall_on = new Point(i, WALL_ON);
	//	Position.push_back(wall_on);
	//}

	//for (int i = LEFT_WALL; i < RIGHT_WALL; i++)
	//{
	//	lower_wall = new Point(i, LOWER_WALL);
	//	Position.push_back(lower_wall);
	//}

	//for (int i = WALL_ON; i < LOWER_WALL + 1; i++)
	//{
	//	left_wall = new Point(LEFT_WALL, i);
	//	Position.push_back(left_wall);
	//}

	//for (int i = WALL_ON; i < LOWER_WALL + 1; i++)
	//{
	//	right_wall = new Point(RIGHT_WALL, i);
	//	Position.push_back(right_wall);
	//}

	//this->row = LOWER_WALL - WALL_ON;
	//this->col = RIGHT_WALL - LEFT_WALL;
	ifstream fin(fileName);
	fin >> this->row;
	fin >> this->col;
	this->map = new bool*[this->row];
	for (int i = 0; i < this->row; i++)
	{
		this->map[i] = new bool[this->col];
	}

	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			fin >> this->map[i][j];
		}
	}
}

Map::~Map()
{
}

Map::Map(int row, int col)
{
}

void Map::scan()
{

}

int Map::getRow()
{
	return this->row;
}

int Map::getCol()
{
	return this->col;
}

bool** Map::getMap()
{
	return this->map;
}

//void Map::print()
//{
//console.gotoXY(6, 5);
//for (int i = 0; i < this->row; i++)
//{
//	console.gotoXY(6, 5);
//	for (int j = 0; j < this->col; j++)
//	{
//			/*cout << this->position[i][j].getX()<<","<<this->position[i][j].getY()<<" ";*/
//		if (i == 0 || i == this->row - 1 || j == 0 || j == this->col - 1)
//		{
//			cout << (char)254;
//		}
//		else cout << " ";
//			Sleep(5);
//	}
//	cout << endl;
//}
//}

void Map::draw()
{
	for (int i = 0; i < this->row; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			if (this->map[i][j] == 1)
				cout << (char)219;
			else
				cout << " ";
		}
		cout << endl;
		Sleep(15);
	}
}
