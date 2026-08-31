#include "Enemy.h"
Enemy::Enemy()
{
	enemy.setSize(size);
	enemy.setFillColor(color);
	enemy.setOrigin(origin);
}
void Enemy::setPosition(sf::Vector2f position)
{
	enemy.setPosition(position);
}
void Enemy::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(enemy, states);
}