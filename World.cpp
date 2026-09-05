#include "World.h"
#include <iostream>
TextureManager& World::getTextures()
{
	return textureManager;
}
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
		float pos_X, pos_Y;
		sf::Vector2f rand_position;
		Enemy enemy;
		bool collision;
		do
		{
			collision = false;
			pos_X = rand() % 1280;
			pos_Y = rand() % 720;
			rand_position = { pos_X, pos_Y };
			enemy.setPosition(rand_position);
			collision = player.getBound().findIntersection(enemy.getBound()).has_value();
			for (auto& e : enemies)
			{
				if (e.getBound().findIntersection(enemy.getBound()).has_value())
				{
					collision = true;
					break;
				}
			}
		} while (collision);
		enemies.emplace_back();
		enemies.back().setPosition(rand_position);
		spawn_clock.restart();
	}
}
