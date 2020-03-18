#include "Snake.hpp"


Snake::Snake()
{
	/*tmpp = new Point;*/
}


Snake::~Snake()
{
}

Snake::Snake(int size)
{
	tmpp = new Point;
	srand(time(NULL));
	int x = LEFT_WALL + 5 + rand() % (RIGHT_WALL - LEFT_WALL - 10);
	int y = WALL_ON + 5 + rand() % (LOWER_WALL - WALL_ON - 10);
	for (int i = x; i < size + x; i++)
	{
		Point* tmp = new Point(x, y);
		this->body.push_back(tmp);
	}
}

Snake::Snake(vector<Point*> point)
{
	this->body = point;
}

Snake::Snake(const Snake& snake)
{
	for (int i = 0; i < snake.body.size(); i++)
	{
		Point* tmp = new Point(*snake.body[i]);
		this->body.push_back(tmp);
	}
}

vector<Point*> Snake::setBody()
{
	return this->body;
}

int Snake::setSize()
{
	return this->body.size();
}

//void Snake::print()
//{
//	for (int i = 0; i < body.size(); i++)
//	{
//		cout << "(" << body[i]->getX() << "," << body[i]->getY() << ")";
//	}
//}

//bool die()
//{
//}
//bool Snake::checkCollision(Snake snake)
//{
//
//}
bool Snake::checkCollision(Map* map)
{
	for (int i = 0; i < map->getRow(); i++)
	{
		for (int j = 0; j < map->getCol(); j++)
		{
			if (map->getMap()[i][j] == true)
			{
				if (this->body[0]->getX() == j && this->body[0]->getY() == i)
					return true;
			}
		}
	}
	return false;
}

bool Snake::checkCollision(Item* item)
{
	if (this->body[0]->getX() == item->getPosition().getX()
		&& this->body[0]->getY() == item->getPosition().getY())
		return true;
	return false;
}

void Snake::updateEvent()
{
	if (this->tmpp != NULL)
	{
		delete this->tmpp;
	}
	this->tmpp = this->body[this->body.size() - 1];
	//delete this->body[this->body.size() - 1];
	for (int i = this->body.size() - 1; i > 0; i--)
	{
		this->body[i] = this->body[i - 1];
	}
	Point* tmp = new Point(*body[0]);
	switch (this->direction)
	{
	case GO_UP:
		tmp->setY(this->body[0]->getY() - 1);
		break;
	case GO_DOWN:
		tmp->setY(this->body[0]->getY() + 1);
		break;
	case GO_LEFT:
		tmp->setX(this->body[0]->getX() - 1);
		break;
	case GO_RIGHT:
		tmp->setX(this->body[0]->getX() + 1);
		break;
	}
	body[0] = tmp;
}

void Snake::updateSnake()
{
	this->body.resize(this->body.size() + 1);
	this->body[this->body.size() - 1] = new Point;
}

void Snake::control()
{
	int key = this->console.inputKey();
	if (this->direction != GO_LEFT && (key == 'd' || key == 'D') || (this->direction != GO_LEFT && key == 1077))
		this->direction = GO_RIGHT;
	else if (this->direction != GO_RIGHT && (key == 'a' || key == 'A') || (this->direction != GO_RIGHT && key == 1075))
		this->direction = GO_LEFT;
	else if (this->direction != GO_DOWN && (key == 'w' || key == 'W') || (this->direction != GO_DOWN && key == 1072))
		this->direction = GO_UP;
	else if (this->direction != GO_UP && (key == 's' || key == 'S') || (this->direction != GO_UP && key == 1080))
		this->direction = GO_DOWN;
}

ostream& operator<<(ostream& out, const Snake& x)
{
	for (int i = 0; i < x.body.size(); i++)
	{
		out << x.body[0];
	}
	return out;
}

void Snake::draw()
{
	for (int i = 0; i < this->body.size(); i++)
	{
		this->console.gotoXY(this->body[i]->getX(), this->body[i]->getY());
		cout << (char)254;
	}
	this->console.gotoXY(this->tmpp[0].getX(), this->tmpp[0].getY());
	cout << " ";
}