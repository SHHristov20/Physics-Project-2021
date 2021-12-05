#include <SFML/Graphics.hpp>
#include <stdlib.h> // for null
#include <iostream>
#include <Windows.h>
#include "Game1.h"
#include "front-end.h"

/// <summary>
/// Random direction generator
/// </summary>
/// <param name="index"></param>
/// <param name="Array"></param>
/// <returns></returns>
int assignDirection(int index, int Array[])
{
	srand(time(NULL));
	Array[index + 1] = rand() % 8;
	return Array[index + 1];
}

/// <summary>
/// Start "Catch the leaf" game
/// </summary>
void startGame1() 
{
	sf::RenderWindow window(sf::VideoMode(1500, 1000), "Catch the leaf", sf::Style::Default);

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
        int direction[1000] = { 0 };
        double speed = 0.0005f;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        for (int i = 0; i < 300; i++)
        {
            if (direction[i] == 0)
            {
                object.move(0.0f, speed);
                assignDirection(i, direction);
            }
            else if (direction[i] == 1)
            {
                object.move(speed, speed);
                assignDirection(i, direction);
            }
            else if (direction[i] == 2)
            {
                object.move(speed, 0.0f);
                assignDirection(i, direction);
            }
            else if (direction[i] == 3)
            {
                object.move(speed, -speed);
                assignDirection(i, direction);
            }
            else if (direction[i] == 4)
            {
                object.move(0.0f, -speed);
                assignDirection(i, direction);
            }
            else if (direction[i] == 5)
            {
                object.move(-speed, -speed);
                assignDirection(i, direction);
            }
            else if (direction[i] == 6)
            {
                object.move(-speed, 0.0f); 
                assignDirection(i, direction);
            }
            else if (direction[i] == 7)
            {
                object.move(-speed, speed);
                assignDirection(i, direction);
            }
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            if (object.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
            {
                object.setOrigin(50.0f, 50.0f);
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                object.setPosition((float)mousePos.x, (float)mousePos.y);
            }
        }

        window.clear();
        window.draw(Background);
        window.draw(object);
        window.display();
    }
}