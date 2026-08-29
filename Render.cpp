#include "Render.h"


void Render::render(World& world, Window& window)
{
	window.clear();
	window.draw(world.getPlayer());
	window.display();
}
