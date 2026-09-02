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
std::vector<Bullet>& World::getBullets()
{
	return bullets;
}
sf::Clock& World::getShootClock()
{
	return shoot_clock;
}
void World::spawnEnemy()
{
	if (enemies.size() < 10 && spawn_clock.getElapsedTime() > sf::milliseconds(800))
	{
		enemies.emplace_back();
		float pos_X = rand() % 1280;
		float pos_Y = rand() % 720;
		sf::Vector2f rand_position = { pos_X, pos_Y };
		enemies.back().setPosition(rand_position);

		spawn_clock.restart();
		std::cout << enemies.size() << " " << pos_X << " " << pos_Y << std::endl;
	}
}
