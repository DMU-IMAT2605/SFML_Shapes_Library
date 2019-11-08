#pragma once
#include "Rectangle.h"
class Square :	public Rectangle
{
public:
	Square() {}; //!< Default constructor.
	Square(sf::Vector2f origin, float width); //!< Constructor initialising values and creating the origin of the shape and its width.

	void CreateSquare(sf::Color colour); //!< Creates the square with its origin and colour set at each point.

};

