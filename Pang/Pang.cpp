#include "Game.h"
#include "SplashScreen.h"

int main()
{
	sf::RenderWindow window;
	window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT, 32), "Pang!");
	SplashScreen::Show(window);
	//Game::Start();
	

	return 0;
}