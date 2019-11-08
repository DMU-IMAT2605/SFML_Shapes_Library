#pragma once
#include "Shapes.h"
class Rectangle :	public Shapes
{
public:
	 
	Rectangle();//!< Default constructor.

	void CreateRectangle(sf::Vector2f origin, float width, float height, sf::Color colour); //!< Creates a rectangle shape of type quad with the set origin, width, heightm and colour.

protected:

	float m_fH, m_fW; //!< Used to define the width and height of the quad.
	sf::Vector2f m_fO; //!< Sets the origin of the quad. This is where the quad will begin drawing from.


};

