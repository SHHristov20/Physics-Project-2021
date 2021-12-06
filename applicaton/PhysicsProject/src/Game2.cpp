#include <iostream>
#include "Game2.h"
#include <sfml\Graphics.hpp>
#include <time.h>
#include "front-end.h"
#include "doodleJumpMenu.h"
#include <cmath>

struct coords { //platform coordinates
	int x = 34;
	int y;
};

/// <summary>
/// Start the "Doodle Jump" game
/// </summary>
void startGame2() {
	srand(time(0));

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

	int temp = 10;
	for (int i = 0; i < 10; i++) // Making random platform generation
	{
		platf[i].x = rand() % 340;
		platf[i].y = rand() % 533;

		if (platf[i].x = platf[i - 1].x - rand() % 50) //Prevent platform overlap
		{
			platf[i].x = rand() % 340;
		}
	}

	int x = 100; // character coordinates
	int y = 100;
	int h = 200;
	float cx = 0;
	float cy = 0;
	int score = 0;
	bool flag = true;
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
		cy = cy + 0.2;
		y = y + cy; // character movement

		if (y < h)
		{
			for (int i = 0; i < 10; i++)
			{
				y = h;
				platf[i].y = platf[i].y - cy;

				if (platf[i].y > 533) // if a platform spawns out out of the y, respawn it
				{
					platf[i].y = 0;
					platf[i].x = rand() % 340;
				}
			}
		}

		for (int i = 0; i < 10; i++)
		{
			if ((x + 50 > platf[i].x) && (x + 20 < platf[i].x + 68) && (y + 70 > platf[i].y) && (y + 70 < platf[i].y + 14) && (cy > 0)) // if the character steps on the platform, he bounces
			{
				cy = -10;
				score++;

				system("cls");
				printScore();
				gotoXY(4, 2);
				score += abs(y);
				score -= 200;
				std::cout << "Score: " << score;

				gotoXY(23, 2);
				std::cout << char(186);
				gotoXY(26, 2);
				std::cout << char(179) << char(177);
			}

		}

		if (Character.getPosition().y + Character.getGlobalBounds().height > 533) //Game over
		{
			window.close();
			system("cls");
			printScore();
			gotoXY(4, 2);
			std::cout << "Score: " << score;
			gotoXY(23, 2);
			std::cout << char(186);
			gotoXY(26, 2);
			std::cout << char(179) << char(177);
			Sleep(3000);

			system("cls");
			startMenu();
		}

		Character.setPosition(x, y);

		if (flag)
		{
			for (int i = 0; i < 2; i++) // Spawn initial platform under the character on the first iteration
			{
				platf[i].x = Character.getPosition().x;
				platf[i].y = Character.getPosition().y + 10;
				flag = false;
			}
		}

		//Left border collision
		if (Character.getPosition().x < 0.f)
		{
			Character.setPosition(0, Character.getPosition().y);
		}
		
		//Right border collision
		if (Character.getPosition().x + Character.getGlobalBounds().width > 400)
		{
			Character.setPosition(400 - Character.getGlobalBounds().width, Character.getPosition().y);
		}

		window.draw(Background); // Drawing the textures
		
		for (int i = 0; i < 10; i++)
		{
			Platform.setPosition(platf[i].x, platf[i].y); // Setting the platform position
			window.draw(Platform);
		}
		window.draw(Character);

		window.display();
	}
}