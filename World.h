#pragma once
#include "Player.h"
#include "Enemy.h"

class World
{
private:
	Player player;
	std::vector<Enemy> enemies;
	sf::Clock spawn_clock;
public:
	Player& getPlayer();
	std::vector<Enemy>& getEnemies();

	void spawnEnemy();
};

