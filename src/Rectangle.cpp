#include "Rectangle.h"

Rectangle::Rectangle()
{
	m_fO = sf::Vector2f(100, 100);
	m_fW = 45;
	m_fH = 20;

	m_ShapeVA.setPrimitiveType(sf::Quads); //!< Set the type for the vertex array to quads.
	m_ShapeVA.resize(4); //!< Size the quads to 4 points.
}

void Rectangle::CreateRectangle(sf::Vector2f origin, float width, float height, sf::Color colour)
{
	m_fO = origin;
	m_fW = width;
	m_fH = height;

	m_ShapeVA[0].position = sf::Vector2f(m_fO);
	m_ShapeVA[1].position = sf::Vector2f(m_fO.x, m_fO.y - m_fH);
	m_ShapeVA[2].position = sf::Vector2f(m_fO.x + m_fW, m_fO.y - m_fH);
	m_ShapeVA[3].position = sf::Vector2f(m_fO.x + m_fW, m_fO.y);
	
	m_ShapeVA[0].color = colour;
	m_ShapeVA[1].color = colour;
	m_ShapeVA[2].color = colour;
	m_ShapeVA[3].color = colour;
}


