#pragma once
#include "Window.h"
#include "World.h"

class Update
{
private:
	sf::Clock clock;
public:
	void update(World& world, Window& window);
};

