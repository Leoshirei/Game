#pragma once
#include <unordered_map>
#include <SFML/Graphics.hpp>
class TextureManager
{
private:
	std::unordered_map<std::string, sf::Texture> textures;
public:
	TextureManager();
	const sf::Texture& getTexture(std::string name_texture);
};

