#include "Render.h"


void Render::render(World& world, Window& window)
{
	window.clear();

	window.draw(world.getPlayer());
	for (Enemy& enemy : world.getEnemies())
	{
		window.draw(enemy);
	}
	for (Bullet& bullet : world.getBullets())
	{
		window.draw(bullet);
	}

	window.display();
}
