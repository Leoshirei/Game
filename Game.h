#pragma once
#include "World.h"
#include "Window.h"
#include "Update.h"
#include "Render.h"

class Game
{
private:
	Window window;
	Update update;
	Render render;
	World world;
public:
	void run();
};

