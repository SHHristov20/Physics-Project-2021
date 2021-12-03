#include <SFML/Graphics.hpp>
#include <stdlib.h> // for null
#include <iostream>
#include <Windows.h>
#include "Game1.h"
#include "front-end.h"

void startGame1() 
{
	sf::RenderWindow window(sf::VideoMode(1500, 1000), "Catch the leaf", sf::Style::Default);
	window.setFramerateLimit(60);

	sf::RectangleShape object(sf::Vector2f(100, 100));
	object.setOrigin(-700.0f, -450.0f);

	sf::Texture objectTexture;
	objectTexture.loadFromFile("../PhysicsProject/images/leaf.png");
	object.setTexture(&objectTexture);

	sf::Texture background;
	background.loadFromFile("../PhysicsProject/images/grass-background.jpg");
	sf::Sprite Background(background);

	

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

		window.clear();
		window.draw(Background);
		window.draw(object);
		window.display();
	}
}