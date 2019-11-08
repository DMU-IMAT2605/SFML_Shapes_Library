#include "Triangle.h"


Triangle::Triangle(sf::Vector2f pos1, sf::Vector2f pos2, sf::Vector2f pos3)
{
	m_fPos1 = pos1;
	m_fPos2 = pos2;
	m_fPos3 = pos3;

	m_ShapeVA.setPrimitiveType(sf::Triangles);
	m_ShapeVA.resize(3);
	
	m_ShapeVA[0] = pos1;
	m_ShapeVA[1] = pos2;
	m_ShapeVA[2] = pos3;
}

void Triangle::CreateTriangle(sf::Color colour)
{
	m_ShapeVA[0].position = m_fPos1;
	m_ShapeVA[1].position = m_fPos2;
	m_ShapeVA[2].position = m_fPos3;

	m_ShapeVA[0].color = (colour + sf::Color(50,190,50));
	m_ShapeVA[1].color = colour;
	m_ShapeVA[2].color = colour;
}

