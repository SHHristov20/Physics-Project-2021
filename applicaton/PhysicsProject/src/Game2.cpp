#include <iostream>
#include "Game2.h"
#include <sfml\Graphics.hpp>
#include "front-end.h"

void startGame2() {
	sf::RenderWindow window(sf::VideoMode(400, 533), "Game", sf::Style::Default);
	
	window.setFramerateLimit(60);

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
	}
}