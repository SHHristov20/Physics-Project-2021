#include <iostream>
#include "Game2.h"
#include <sfml\Graphics.hpp>
#include "front-end.h"

struct coords { //platform coordinates
	int x;
	int y;
};

void startGame2() {
	sf::RenderWindow window(sf::VideoMode(400, 533), "Doodle Jump", sf::Style::Default); // window creation
	
	window.setFramerateLimit(60); // FPS

	sf::Texture background; // Creating textures
	sf::Texture platform;
	sf::Texture character;

	background.loadFromFile("../PhysicsProject/images/background.png"); // Loading Textures
	platform.loadFromFile("../PhysicsProject/images/platform.png");
	character.loadFromFile("../PhysicsProject/images/character.png");

	sf::Sprite Background(background);
	sf::Sprite Platform(platform);
	sf::Sprite Character(character);

	coords platf[20];

	for (int i = 0; i < 10; i++) // Making rndoom platform generation
	{
		platf[i].x = rand() % 400;
		platf[i].y = rand() % 533;
	}

	int x = 100; // character coordinates
	int y = 100;
	int h = 200;
	double dx = 0;
	double dy = 0;
	while (window.isOpen())
	{
		sf::Event evnt;

		while (window.pollEvent(evnt))
		{
			if (evnt.type == sf::Event::Closed)
			{
				window.close(); // get back to the loading screen when the window is closed
				start();
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) // Getting input for the movment
		{
			x = x + 3;
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			x = x - 3;
		}
		dy = dy + 0.2;
		y = y + dy; // character movment

		if (y > 500) // if the character touches the border, bounce back
		{
			dy = dy - 10;
		}

		Character.setPosition(x, y);

		window.draw(Background); // Drawing the textures
		window.draw(Character);

		for (int i = 0; i < 10; i++)
		{
			Platform.setPosition(platf[i].x, platf[i].y); // Setting the platform position
			window.draw(Platform);
		}

		window.display();
	}
}