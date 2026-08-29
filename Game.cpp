#include "Game.h"

void Game::run()
{
	while (window.isOpen())
	{
		update.update(window);
	}
}