#include "Game.h"
#include "SplashScreen.h"

int main()
{
	sf::RenderWindow window;
	SplashScreen::Show(window);
	Game::Start();
	

	return 0;
}