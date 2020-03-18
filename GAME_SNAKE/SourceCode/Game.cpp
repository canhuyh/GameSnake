#include "Game.hpp"

Game::Game()
{
	snake = new Snake(3);
	item = new Item;
	map = new Map("map.txt");
}


Game::~Game()
{
}

void Game::run()
{
	Game game;
	this->console.noCursorType();
	int next = 1;
	map->draw();
	while (1)
	{
		snake->updateEvent();
		item->draw();
		snake->control();
		snake->draw();
		if (snake->checkCollision(item) == true)
		{
			item->update(map, snake);
			snake->updateSnake();
		}
		else if (snake->checkCollision(map) == true)
		{
			
			cout << "GAME OVER!!!";
			break;
		}
		Sleep(100);
	}

}

//bool Game::isGameOver()
//{
//
//}