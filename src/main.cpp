
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


//! Instantiation of the shape objects using their constructor values.
Arc arc(50, 50, 0.5, 4.5, 150, 100);
Arc spyrograph(60, 60, 80, 160, 300, 300); //!< A version of the arc using degrees for the start and end angles. Creates a spyrograph.
Circle circle(40.5, 200,200);
Ellipse ellipse(70, 30, 400,200);
Line line;
Dot dot(350,400);
Square square(sf::Vector2f(30,30), 90);
Rectangle rectangle;
Triangle triangle(sf::Vector2f(600, 450), sf::Vector2f(650, 480), sf::Vector2f(625, 400));


int main() //!< Entry point for the application
{
	sf::RenderWindow window(sf::VideoMode(1024, 800), "Shapes Drawing Program");
	window.setFramerateLimit(60);

	//! Creation of the shapes
	arc.CreateArc(sf::Vector2f(800, 100), sf::Color(255, 59, 6));
	spyrograph.CreateArc(sf::Vector2f(800,450), sf::Color(100, 150, 10));
	circle.CreateCircle(sf::Vector2f(800, 600), sf::Color(sf::Color::Yellow));
	ellipse.CreateEllipse(sf::Vector2f(800,250), sf::Color(sf::Color::Blue));
	dot.CreateDot(sf::Vector2f(dot.GetPosition().x, dot.GetPosition().y), sf::Color(sf::Color::Red));
	square.CreateSquare(sf::Color(88,200,10));
	rectangle.CreateRectangle(sf::Vector2f(80,350),150, 80, sf::Color(30,100,100));
	line.CreateLine(sf::Vector2f(400, 400), sf::Vector2f(10, 800),sf::Color::Blue );
	triangle.CreateTriangle(sf::Color(200, 0, 180));
	//! Welcome message.
	cout << "|| Welcome to my shapes library ! ||" << endl << endl << "  Below will be descriptions of what has occurred in the window : " << endl << endl;
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				window.close();
			}

			if (event.type == sf::Event::KeyPressed)
			{
				switch (event.key.code)
				{
					case(sf::Keyboard::Num2):
					{
						ellipse.RotateShape(5);
						cout << "Rotated ellipse by 5" << endl;
						break;
					}
					case(sf::Keyboard::Num3):
					{
						arc.ScaleShape(1.2);
						cout << "Scaled arc by 1.2" << endl;
						break;
					}
					case(sf::Keyboard::Num4):
					{
						square.TransformShape(5, 10);
						cout << "Translated square by 5 in the horizontal and 10 in the vertical" << endl;
						break;
					}
					case(sf::Keyboard::Num1):
					{
						line.CreateLine(sf::Vector2f(400, 400), sf::Vector2f(800, 800), sf::Color::Red);
						cout << "Changed the definition of the line to a different end point and colour" << endl;
						break;
					}
					default:
						break;
				}
			}
		}

		
		window.clear();
		//! Drawing of shapes

		window.draw(circle);
		window.draw(ellipse);
		window.draw(dot);
		window.draw(arc);
		window.draw(spyrograph);
		window.draw(square);
		window.draw(rectangle);
		window.draw(line);
		window.draw(triangle);
		window.display();
	}
}

