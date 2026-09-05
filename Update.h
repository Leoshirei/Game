#pragma once
#include "Window.h"
#include "World.h"
#include "Collision.h"

class Update
{
private:
	sf::Clock clock;
	Collision collission;
public:
	void update(World& world, Window& window);
};

