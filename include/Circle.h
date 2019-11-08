#pragma once
#include "Ellipse.h"
class Circle : public Ellipse
{
public:
	Circle() {}; //!< Default constructor.
	Circle(float radXY, float cenX, float cenY); //!< Constructor that sets the value for the radius using the inherited attributes from ellipse.
	~Circle() {};
	void CreateCircle(sf::Vector2f pos, sf::Color colour); //!< Uses the equation for a circle to create the shape and sets the colour at each vertex in the array.

};

