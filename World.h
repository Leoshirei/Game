#pragma once
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

class World
{
private:
	Player player;
	std::vector<Enemy> enemies;
	std::vector<Bullet> bullets;
	sf::Clock spawn_clock;
	sf::Clock shoot_clock;
public:
	Player& getPlayer();
	std::vector<Enemy>& getEnemies();
	std::vector<Bullet>& getBullets();
	sf::Clock& getShootClock();

	void spawnEnemy();
};

