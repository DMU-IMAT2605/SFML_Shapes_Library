#include "Arc.h"



Arc::Arc()
{

}
Arc::Arc(float radX, float radY, float startA, float endA, float cenX, float cenY) 
{
	m_iArrSize = 45;
	m_fRX = radX;
	m_fRY = radY;
	m_fCX = cenX;
	m_fCY = cenY;
	m_fA1 = startA;
	m_fA2 = endA;
	m_fTheta = m_fA1;
	m_fThetaStep = (m_fA2 - m_fA1) / (m_iArrSize - 1);
	m_ShapeVA.setPrimitiveType(sf::LineStrip);
	m_ShapeVA.resize(m_iArrSize);

}
void Arc:: CreateArc(sf::Vector2f pos, sf::Color colour)
{
	//m_fTheta = m_fA1; //!< Set theta to start at the beginning angle for the arc.

	for (int i = 0; i < m_ShapeVA.getVertexCount(); i++)
	{
		m_fTheta += m_fThetaStep; // Increment theta by the displacement value defined in the header.
		m_ShapeVA[i].position = sf::Vector2f((pos.x + cos(m_fTheta) * m_fRX),(pos.y + sin(m_fTheta) * m_fRY)); // Updates the position of the arc using the arc formula.
		m_ShapeVA[i].color = colour;
	}
	setPosition(pos);

}
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_ShapeVA);
}
Arc::~Arc()
{
}

// Getters //
sf::Vector2f Arc::GetRadius() 
{
	return sf::Vector2f(m_fRX, m_fRY);
}
sf::Vector2f Arc::GetCentre()
{
	return sf::Vector2f(m_fCX, m_fCY);
}
float Arc::GetAngles()
{
	return m_fA1, m_fA2;
}

// Setters //

void Arc::SetRadius(float radX,float radY)
{
	m_fRX = radX;
	m_fRY = radY;
}
void Arc::SetCentre(float cenX, float cenY)
{
	m_fCX = cenX;
	m_fCY = cenY;
}
void Arc::SetAngles(float startA, float endA)
{
	m_fA1 = startA;
	m_fA2 = endA;
}


