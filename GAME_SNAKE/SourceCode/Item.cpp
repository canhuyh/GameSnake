#include "Item.hpp"

Item::Item()
{
	srand(time(NULL));
	int x = LEFT_WALL + 1 + rand() % (RIGHT_WALL - LEFT_WALL - 2);
	int y = WALL_ON + 1 + rand() % (LOWER_WALL - WALL_ON - 2);
	this->position = new Point(x, y);
	/*this->position.setX(x);
	this->position.setY(y);*/
}


Item::~Item()
{
}

Item::Item(Point* position, char texture)
{
	this->position = position;
	this->texture = texture;
}

void Item::print()
{
	cout << "(" << this->position->getX() << "," << this->position->getY() << ")";
}

Point Item::getPosition()
{
	return *this->position;
}

void Item::draw()
{
	console.gotoXY(this->position->getX(), this->position->getY());
	cout << char(235);
}
void Item::update(Map* map, Snake* snake)
{
	srand(time(NULL));
	int x = LEFT_WALL + 1 + rand() % (RIGHT_WALL - LEFT_WALL - 2);
	int y = WALL_ON + 1 + rand() % (LOWER_WALL - WALL_ON - 2);
	//random khi trùng map
	do
	{
		x = LEFT_WALL + 1 + rand() % (RIGHT_WALL - LEFT_WALL - 2);
		y = WALL_ON + 1 + rand() % (LOWER_WALL - WALL_ON - 2);
	} while (map->getMap()[y][x] == true);
	//random khi trùng rắn
	for (int i = 0; i < snake->setSize(); i++)
	{
		if (this->position->getX() == snake->setBody()[i]->getX()
			&& this->position->getY() == snake->setBody()[i]->getY())
		{
			x = LEFT_WALL + 1 + rand() % (RIGHT_WALL - LEFT_WALL - 2);
			y = WALL_ON + 1 + rand() % (LOWER_WALL - WALL_ON - 2);
		}
	}
	this->position->setX(x);
	this->position->setY(y);
}