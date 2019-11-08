#pragma once
#include "Shapes.h"
class Line :
	public Shapes
{
public:
	Line(); //!< Default constructor.
	~Line();

	void CreateLine(sf::Vector2f point1, sf::Vector2f point2, sf::Color colour); //!< Creates the line using the vector points to define its length and sets a colour to them.
};

