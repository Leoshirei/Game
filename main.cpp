#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 1280, 720 }), "Game");
	while (window.isOpen())
	{
		window.clear();
		window.display();
	}
}