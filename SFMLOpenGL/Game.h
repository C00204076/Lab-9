#ifndef GAME_H
#define GAME_H

#include "Debug.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <gl/glew.h>
#include <gl/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>


class Game
{
public:
	Game();
	~Game();
	void run();

private:
	sf::Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();

	//std::ifstream vertexFile();
	sf::Clock clock;
	sf::Time elapsed;

	float rotationAngle = 0.0f;
};

#endif