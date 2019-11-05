#include "Square.h"

Square::Square()
{

}

Square::Square(sf::Vector2f origin, float width)
{
	m_fO = origin;
	m_fW = width;
	m_fH = m_fW;

	m_ShapeVA.setPrimitiveType(sf::Quads);
	m_ShapeVA.resize(4);
}

void Square::CreateSquare(sf::Vector2f origin, sf::Color colour)
{
	m_ShapeVA[0].position = sf::Vector2f(m_fO);
	m_ShapeVA[1].position = sf::Vector2f(m_fO.x, m_fO.y + m_fW);
	m_ShapeVA[2].position = sf::Vector2f(m_fO.x + m_fW, m_fO.y + m_fW);
	m_ShapeVA[3].position = sf::Vector2f(m_fO.x + m_fW, m_fO.y);


}

void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_ShapeVA);
}
