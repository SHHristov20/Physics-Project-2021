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