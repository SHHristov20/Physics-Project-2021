#include <iostream>
#include "Game2.h"
#include <sfml\Graphics.hpp>
#include "front-end.h"

struct coords {
	int x;
	int y;
};

void startGame2() {
	sf::RenderWindow window(sf::VideoMode(400, 533), "Doodle Jump", sf::Style::Default);
	
	window.setFramerateLimit(60);

	sf::Texture background;
	sf::Texture platform;
	sf::Texture character;

	background.loadFromFile("../PhysicsProject/images/background.png");
	platform.loadFromFile("../PhysicsProject/images/platform.png");
	character.loadFromFile("../PhysicsProject/images/character.png");

	sf::Sprite Background(background);
	sf::Sprite Platform(platform);
	sf::Sprite Character(character);

	coords platf[20];

	for (int i = 0; i < 10; i++)
	{
		platf[i].x = rand() % 400;
		platf[i].y = rand() % 533;
	}

	while (window.isOpen())
	{
		sf::Event evnt;

		while (window.pollEvent(evnt))
		{
			if (evnt.type == sf::Event::Closed)
			{
				window.close();
				start();
			}
		}

		window.draw(Background);
		window.draw(Character);

		for (int i = 0; i < 10; i++)
		{
			Platform.setPosition(platf[i].x, platf[i].y);
			window.draw(Platform);
		}

		window.display();
	}
}