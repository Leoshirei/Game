#include "Update.h"

void Update::update(Window& window)
{
	while (std::optional event = window.get().pollEvent())
	{
		if (event->is<sf::Event::Closed>())
		{
			window.close();
		}
	}
}