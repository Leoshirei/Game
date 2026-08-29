#include <SFML/Graphics.hpp>
#include "Window.h"
#include "Update.h"


int main()
{
	Window window;
	Update update;
	while (window.isOpen())
	{
		update.update(window);
	}
}