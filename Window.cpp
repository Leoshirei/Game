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