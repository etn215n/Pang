#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

#define WINDOW_WIDTH  700
#define WINDOW_HEIGHT 380

class Game
{
private:
	static bool IsExiting();
	static void GameLoop();

	enum GameState 
	{
		Uninitialized, ShowingSplash, Paused,
		ShowingMenu  , Playing      , Exiting
	};

	static GameState _gameState;
	static sf::RenderWindow _mainWindow;

public:
	static void Start();
};