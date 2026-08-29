#include "Game.h"

void Game::run()
{
	while (window.isOpen())
	{
		update.update(world, window);
		render.render(world, window);
	}
}