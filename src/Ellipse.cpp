#include "Ellipse.h"


Ellipse::Ellipse(float radX, float radY, float cenX, float cenY)
{
	m_iArrSize = 60;
	m_fRX = radX;
	m_fRY = radY;
	m_fCX = cenX;
	m_fCY = cenY;
	m_fTheta = 0;
	m_fThetaStep = 360 / m_iArrSize;
	m_ShapeVA.setPrimitiveType(sf::LineStrip);
	m_ShapeVA.resize(m_iArrSize);
}

void Ellipse::CreateEllipse(sf::Vector2f pos, sf::Color colour)
{
	for (int i = 0; i < m_ShapeVA.getVertexCount(); i++)
	{
		m_fTheta += m_fThetaStep;
		m_ShapeVA[i].position = sf::Vector2f((pos.x + cos(m_fTheta) * m_fRX), (pos.y + sin(m_fTheta) * m_fRY));
		m_ShapeVA[i].color = colour;
	}
	setPosition(pos);
}
