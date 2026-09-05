#include "TextureManager.h"
TextureManager::TextureManager()
{
	textures["arrow"].loadFromFile("textures/arrow.png");
}
const sf::Texture& TextureManager::getTexture(std::string name_texture)
{
	return textures[name_texture];
}
