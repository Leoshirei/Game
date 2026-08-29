#include "Update.h"

void Update::update(Player& player, Window& window)
{
	float deltaTime = clock.restart().asSeconds();

	while (std::optional event = window.get().pollEvent())
	{
		if (event->is<sf::Event::Closed>())
		{
			window.close();
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
	{
		window.close();
	}

	sf::Vector2f direction = { 0.f, 0.f };

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		direction.y += 1.f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		direction.y -= 1.f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		direction.x -= 1.f;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		direction.x += 1.f;
	}
	if (direction != sf::Vector2f{ 0.f, 0.f })
	{
		direction = direction.normalized();
	}

	player.sprint(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::LShift));
	player.move(direction, deltaTime);
}