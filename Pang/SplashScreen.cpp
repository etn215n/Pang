#include "SplashScreen.h"

void SplashScreen::Show(sf::RenderWindow &window)
{
	sf::Texture backgroundTexture;

	if (backgroundTexture.loadFromFile(FilePath::GetAssetPath("Summer Forest.jpg")) == false)
		return;

	sf::Sprite sprite(backgroundTexture);

	window.draw(sprite);
	window.display();

	sf::Event windowEvent;

	while (true)
	{
		while (window.pollEvent(windowEvent))
		{
			if (windowEvent.type == sf::Event::EventType::Closed
			 || windowEvent.type == sf::Event::EventType::KeyPressed
			 || windowEvent.type == sf::Event::EventType::MouseButtonPressed)
			{
				return;
			}
		}
	}
}