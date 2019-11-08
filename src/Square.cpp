#include "Square.h"


Square::Square(sf::Vector2f origin, float width)
{
	m_fO = origin;
	m_fW = width;
	m_fH = m_fW;

	m_ShapeVA.setPrimitiveType(sf::Quads);
	m_ShapeVA.resize(4);
}

void Square::CreateSquare(sf::Color colour)
{
	m_ShapeVA[0].position = sf::Vector2f(m_fO);
	m_ShapeVA[1].position = sf::Vector2f(m_fO.x, m_fO.y + m_fW);
	m_ShapeVA[2].position = sf::Vector2f(m_fO.x + m_fW, m_fO.y + m_fW);
	m_ShapeVA[3].position = sf::Vector2f(m_fO.x + m_fW, m_fO.y);

	m_ShapeVA[0].color = RainbowColour[1];
	m_ShapeVA[1].color = RainbowColour[4];
	m_ShapeVA[2].color = RainbowColour[5];
	m_ShapeVA[3].color = RainbowColour[3];

}
