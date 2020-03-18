#pragma once
#include"Snake.hpp"
#include"Item.hpp"
#include"Map.hpp";

class Game
{
private:
	Snake* snake;
	Item* item;
	Map* map;
	int score;
	km::Console console;
	bool isGameOver();
public:
	Game();
	~Game();
	void run();
};

