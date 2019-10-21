/*! \mainpage Lab 2 - Shapes
*
* This program gives you a basic SFML winow in which to draw your shapes.
*
* The classes and files you use are up to you.  
*
* This software froms the basis of your submission for lab book 1
*/

/*! \file main.cpp
* \brief Main file for the application
*
* Contains the entry point of the application 
*/

#include "SFML/Graphics.hpp"
#include <Dot.h>
#include <Line.h> 
#include <Square.h> 
#include <Rectangle.h> 
#include <Triangle.h>
#include <Arc.h> 
#include <Circle.h> 
#include <Ellipse.h>
#include <iostream>

using namespace std;

Arc arc(50, 50, 0.78, 3.8, 150, 100);
Circle circle(40.5, 200,200);
Ellipse ellipse;
Line line;
Dot dot;
Square square;
Rectangle rectangle;
Triangle triangle;



int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Shapes Drawing Program");
	window.setFramerateLimit(60);
	arc.CreateArc(sf::Vector2f(arc.GetCentre().x, arc.GetCentre().y), sf::Color(255, 59, 6));
	circle.CreateCircle(sf::Vector2f(circle.GetCentre().x, circle.GetCentre().y), sf::Color(sf::Color::Yellow));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				window.close();
			}

		}
		
		window.clear();
		// Do your drawing here
		window.draw(arc);
		window.draw(circle);

		window.display();
	}
}
