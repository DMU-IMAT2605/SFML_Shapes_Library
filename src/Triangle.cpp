#include "Triangle.h"

Triangle::Triangle()
{

}

Triangle::Triangle(float pos1, float pos2, float pos3)
{
	m_fPos1 = pos1;
	m_fPos2 = pos2;
	m_fPos3 = pos3;

	m_ShapeVA.setPrimitiveType(sf::Triangles);
}

void Triangle::CreateTriangle(sf::Color colour)
{

}

void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{

}
