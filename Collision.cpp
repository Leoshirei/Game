#include "Collision.h"

void Collision::checkCollision(World& world)
{
	for (auto bulletIt = world.getBullets().begin(); bulletIt != world.getBullets().end();)
	{
		bool bullet_erase = false;
		for (auto enemyIt = world.getEnemies().begin(); enemyIt != world.getEnemies().end();)
		{
			if (bulletIt->getBound().findIntersection(enemyIt->getBound()))
			{
				bulletIt = world.getBullets().erase(bulletIt);
				enemyIt = world.getEnemies().erase(enemyIt);
				bullet_erase = true;
				break;
			}
			else
			{
				++enemyIt;
			}
		}
		if (bullet_erase == true)
		{
			continue;
		}
		else
		{
			++bulletIt;
		}
	}
}