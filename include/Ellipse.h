#pragma once
#include "Arc.h"
class Ellipse :	public Arc

{
public:
	Ellipse() {};
	Ellipse(float radX, float radY, float cenX, float cenY); //!< Constructor setting the radius in the x and y of the ellipse, the centre, and other defaults.
	~Ellipse() {};

	void CreateEllipse(sf::Vector2f pos, sf::Color colour); //!< Does the calculation for creating an ellipse shape and sets the colour of each point.

};

