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
void Player::sprint(bool active)
{
	if(active)
	{
		speed = sprint_speed;
	}
	else
	{
		speed = 200.f;
	}
}
void Player::shoot(std::vector<Bullet>& bullets, Window& window, float deltaTime, const sf::Texture& texture)
{
	Bullet bullet(texture);

	sf::Vector2i end_position = sf::Mouse::getPosition(window.get());
	sf::Vector2f start_position = player.getPosition();
	sf::Vector2f direction = { end_position.x - start_position.x, end_position.y - start_position.y };
	direction = direction.normalized();
	bullet.setPosition(start_position);
	bullet.setDirection(direction);
	bullets.push_back(bullet);
	std::cout << bullets.size() << std::endl;
}
sf::FloatRect Player::getBound()
{
	return player.getGlobalBounds();
}