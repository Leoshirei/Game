#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Bullet.h"
#include "Window.h"

class Player : public sf::Drawable
{
private:
	sf::RectangleShape player;
	sf::Vector2f size = { 100.f, 100.f };
	sf::Color color = sf::Color::Blue;
	sf::Vector2f origin = { 50.f, 50.f };
	float speed = 200.f;
	float sprint_speed = 500.f;
	sf::Vector2f position;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
public:
	Player();
	void move(sf::Vector2f direction, float deltaTime);
	void shoot(std::vector<Bullet>& bullets, Window& window, float deltaTime);
	void sprint(bool active);
	sf::FloatRect getBound();
};

