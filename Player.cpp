#include "Player.h"
Player::Player()
{
	player.setSize(size);
	player.setFillColor(color);
	player.setOrigin(origin);
}
void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(player, states);
}

void Player::move(sf::Vector2f direction, float deltaTime)
{
	position += direction * speed * deltaTime;
	player.setPosition(position);
}