#include "Line.h"



/*Line::Line()
{
}*/

Line::Line()
{
	m_ShapeVA.setPrimitiveType(sf::LineStrip);
	m_ShapeVA.resize(2);
}


Line::~Line()
{
}

void Line::CreateLine(sf::Vector2f point1, sf::Vector2f point2, sf::Color colour)
{
	m_ShapeVA[0].color = colour;
	m_ShapeVA[1].color = colour;

	m_ShapeVA[0].position = point1;
	m_ShapeVA[1].position = point2;
}

