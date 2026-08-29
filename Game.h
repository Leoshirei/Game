#pragma once
#include "Window.h"
#include "Update.h"
#include "Render.h"

class Game
{
private:
	Window window;
	Update update;
	Render render;
	Player player;
public:
	void run();
};

