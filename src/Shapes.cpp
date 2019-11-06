#include "Shapes.h"



Shapes::Shapes()
{
}
Shapes::Shapes(sf::Color shapeColour) 
{
	m_ShapeCol = sf::Color(50, 150, 90);
	SetRotating(false);
	m_fRotateA = 50;


}
void Shapes::draw(sf::RenderTarget& target, sf::RenderStates states)const 
{
	target.draw(m_ShapeVA, state);
}

Shapes::~Shapes()
{


}

void Shapes::TransformShape(float x, float y)
{
	m_fTransformX = x;
	m_fTransformY = y;
	for (int i = 0; i < m_ShapeVA.getVertexCount(); i++)
	{
		m_ShapeVA[i].position.x += x;
		m_ShapeVA[i].position.y += y;
	}

}

void Shapes::RotateShape(float angle)
{
	//m_fRotateA = angle;
	m_Rotation.rotate(angle, m_ShapeVA[0].position);
	state.transform = m_Rotation;
	
	
	
}

void Shapes::ScaleShape(float scale)
{

	m_Rotation.scale(sf::Vector2f(scale, scale), m_ShapeVA[0].position);
	state.transform = m_Rotation;
}

void Shapes::SetRotating(bool rotating)
{
	m_bIsRotating = rotating;
}



bool Shapes::GetRotating()
{
	return m_bIsRotating;
}


