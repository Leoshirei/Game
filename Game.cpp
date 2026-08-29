#include "Game.h"
#include "Player.h"
void Game::run()
{
	Player player;
	while (window.isOpen())
	{
		update.update(window);
		render.render(player, window);
	}
}