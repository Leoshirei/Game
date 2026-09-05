#include "Bullet.h"

Bullet::Bullet(const sf::Texture& texture)
{
	bullet.setRadius(radius);
	bullet.setFillColor(color);
	bullet.setOrigin(origin);
	bullet.setTexture(&texture);
}
bool Bullet::isExpired()
{
	return life_time.getElapsedTime() >= sf::seconds(2.f);
}
void Bullet::setPosition(sf::Vector2f position)
{
	bullet.setPosition(position);
}
void Bullet::setDirection(sf::Vector2f direction)
{
	bullet_direction = direction;
}
void Bullet::move(float deltaTime)
{
	bullet.move(bullet_direction * deltaTime * speed);
}
sf::FloatRect Bullet::getBound()
{
	return bullet.getGlobalBounds();
}
void Bullet::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(bullet, states);
}