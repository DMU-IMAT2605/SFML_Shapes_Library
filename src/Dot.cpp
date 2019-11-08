#include "Dot.h"



Dot::Dot()
{
}

Dot::Dot(float pointX, float pointY)
{
	m_fPX = pointX;
	m_fPY = pointY;
	
	m_ShapeVA.setPrimitiveType(sf::Points);
	m_ShapeVA.resize(1);
}


Dot::~Dot()
{
}

void Dot::CreateDot(sf::Vector2f pos, sf::Color colour)
{
	m_ShapeVA[0].position = sf::Vector2f(pos.x, pos.y);
	m_ShapeVA[0].color = sf::Color(100, 0, 180);
}

sf::Vector2f Dot::GetPosition()
{
	return sf::Vector2f(m_fPX, m_fPY);
}

void Dot::SetPosition(float pointX, float pointY)
{
	m_fPX = pointX;
	m_fPY = pointY;
}
