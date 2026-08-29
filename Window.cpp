#include "Window.h"

Window::Window()
	:window(sf::VideoMode({ WIDTH, HEIGHT }), NAME)
{
}
bool Window::isOpen() const
{
	return window.isOpen();
}
void Window::close()
{
	window.close();
}
sf::RenderWindow& Window::get()
{
	return window;
}

//Drawing methods
void Window::clear()
{
	window.clear();
}
void Window::draw(const sf::Drawable& object)
{
	window.draw(object);
}
void Window::display()
{
	window.display();
}