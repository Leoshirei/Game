#pragma once
#include <SFML/Graphics.hpp>
class Bullet : public sf::Drawable
{
private:
	sf::CircleShape bullet;
	sf::Color color = sf::Color::White;
	float radius = 20.f;
	sf::Vector2f origin = { 10.f, 10.f };
	float speed = 400.f;
	sf::Vector2f bullet_direction;
	sf::Clock life_time;
public:
	Bullet(const sf::Texture& texture);
	bool isExpired();
	void move(float deltaTime);
	void setPosition(sf::Vector2f position);
	void setDirection(sf::Vector2f direction);
	sf::FloatRect getBound();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

