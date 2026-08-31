#pragma once
#include <SFML/Graphics.hpp>

class Enemy : public sf::Drawable
{
private:
	sf::RectangleShape enemy;
	sf::Vector2f size = {25.f, 25.f};
	sf::Color color = sf::Color::Red;
	sf::Vector2f origin = { 12.5, 12.5 };
public:
	Enemy();
	void setPosition(sf::Vector2f position);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

