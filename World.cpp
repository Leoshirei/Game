#include "World.h"
#include <iostream>

Player& World::getPlayer()
{
	return player;
}
std::vector<Enemy>& World::getEnemies()
{
	return enemies;
}
void World::spawnEnemy()
{
	if (enemies.size() < 10 && spawn_clock.getElapsedTime() < sf::milliseconds(200))
	{
		enemies.emplace_back();
		spawn_clock.restart();
		std::cout << enemies.size() << std::endl;
	}
}
