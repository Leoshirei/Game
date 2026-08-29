#pragma once
#include "Window.h"
#include "Update.h"

class Game
{
private:
	Window window;
	Update update;
public:
	void run();
};

