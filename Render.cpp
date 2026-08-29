#include "Render.h"

void Render::render(Player& player, Window& window)
{
	window.clear();
	window.draw(player);
	window.display();
}
