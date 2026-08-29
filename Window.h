#pragma once
#include <string>
#include <SFML/Graphics.hpp>

class Window
{
private:
	unsigned int WIDTH = 1280;
	unsigned int HEIGHT = 720;
	std::string NAME = "Game v0.0.1";
	sf::RenderWindow window;
public:
	Window();
	bool isOpen() const;
	void close();
	void clear();
	void draw(const sf::Drawable& object);
	void display();
	sf::RenderWindow& get();
};

