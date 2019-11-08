#pragma once
#include "Shapes.h"
class Triangle : public Shapes
{
public:

	Triangle() {}; //!< Default constructor.
	Triangle(sf::Vector2f pos1, sf::Vector2f pos2, sf::Vector2f pos3); //!< Constructor setting up the position of the points for the triangle.

	void CreateTriangle(sf::Color colour); //!< Creates the triangle using the initialised values and sets colour to the points.
	
private:

	sf::Vector2f m_fPos1, m_fPos2, m_fPos3; //!< Vectors for the points where the triangle draws between.

};

