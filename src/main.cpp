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

Arc arc(50, 50, 0.5, 4.5, 150, 100);
Arc spyrograph(60, 60, 80, 160, 300, 300);
Circle circle(40.5, 200,200);
Ellipse ellipse(70, 30, 400,200);
Line line;
Dot dot(350,400);
Square square(sf::Vector2f(30,30), 10);
Rectangle rectangle;
Triangle triangle;



int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Shapes Drawing Program");
	window.setFramerateLimit(60);

	arc.CreateArc(sf::Vector2f(arc.GetCentre().x, arc.GetCentre().y), sf::Color(255, 59, 6));
	spyrograph.CreateArc(sf::Vector2f(spyrograph.GetCentre().x, spyrograph.GetCentre().y), sf::Color(100, 150, 10));
	circle.CreateCircle(sf::Vector2f(circle.GetCentre().x, circle.GetCentre().y), sf::Color(sf::Color::Yellow));
	ellipse.CreateEllipse(sf::Vector2f(ellipse.GetCentre().x, ellipse.GetCentre().y), sf::Color(sf::Color::Blue));
	dot.CreateDot(sf::Vector2f(dot.GetPosition().x, dot.GetPosition().y), sf::Color(sf::Color::Red));
	square.CreateSquare(sf::Vector2f(60, 400), sf::Color(88,200,10));
	rectangle.CreateRectangle(sf::Vector2f(100, 100),50, 30, sf::Color(30,100,100));
	cout << dot.GetPosition().x << endl << dot.GetPosition().y << endl;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				window.close();
			}
			if (sf::Event::KeyPressed)
			{
				switch (event.key.code)
				{
				case (sf::Keyboard::Num1):
				{
					cout << arc.GetRotating() << endl;
					arc.TransformShape(3, 3);
					ellipse.RotateShape(45);
					arc.SetRotating(true);
					if (!arc.GetRotating())
					{
						
					}
					else
					{
						arc.SetRotating(false);
					}
					cout << arc.GetRotating() << endl;
					break;
				}
				case (sf::Keyboard::Num2):
				{

					break;
				}
				}
			}
		}

		
		window.clear();
		// Do your drawing here

		window.draw(circle);
		window.draw(ellipse, ellipse.state);
		window.draw(dot);
		window.draw(arc, arc.state);
		window.draw(spyrograph);
		window.draw(square, square.state);
		window.draw(rectangle);
		window.display();
	}
}
