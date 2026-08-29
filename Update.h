#pragma once
#include "Window.h"
#include "Player.h"

class Update
{
private:
	sf::Clock clock;
public:
	void update(Player& player, Window& window);
};

