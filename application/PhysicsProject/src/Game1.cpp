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
    sf::RenderWindow window(sf::VideoMode(1500, 1000), "Catch the leaf", sf::Style::Default); // window creation
    window.setFramerateLimit(60); // FPS

    sf::RectangleShape object(sf::Vector2f(100, 100));
    object.setOrigin(-700.0f, -450.0f);

    sf::Texture objectTexture; // Create texture
    objectTexture.loadFromFile("../PhysicsProject/images/leaf.png"); // Load texture
    object.setTexture(&objectTexture);

    sf::Texture background; // Create texture
    background.loadFromFile("../PhysicsProject/images/grass-background.jpg"); // Load texture
    sf::Sprite Background(background);

    while (window.isOpen())
    {
        int direction[1000] = { 0 };
        double speed = 0.03f; // Set movement speed

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close(); // get back to the loading screen when the window is closed
                start();
            }
        }

        for (int i = 0; i < 300; i++) // sorth movement directions
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

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // Check if left mouse button is clicked
        {
            if (object.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window)))) // Check if the mouse is on the leaf
            {
                // Move the leaf with the mouse
                object.setOrigin(50.0f, 50.0f);
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                object.setPosition((float)mousePos.x, (float)mousePos.y);
            }
        }

        //Border collision

        // Left border collision
        if (object.getPosition().x < 0.f)
        {
            object.setPosition(0.f, object.getPosition().y);

        }

        // Top border collision
        if (object.getPosition().y < 0.f)
        {
            object.setPosition(object.getPosition().x, 0.f);
        }

        // Right border collision
        if (object.getPosition().x + object.getGlobalBounds().width > 1500)
        {
            object.setPosition(1500 - object.getGlobalBounds().width, object.getPosition().y);
        }

        // Bottom border collision
        if (object.getPosition().y + object.getGlobalBounds().height > 1000)
        {
            object.setPosition(object.getPosition().x, 1000 - object.getGlobalBounds().height);
        }

        window.clear();
        window.draw(Background); // Draw the background
        window.draw(object); // Draw the player
        window.display();
    }
}