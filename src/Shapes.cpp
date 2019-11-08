#include "Shapes.h"


Shapes::Shapes(sf::Color shapeColour) 
{
	m_ShapeCol = sf::Color(50, 150, 90);
	SetRotating(false);
	m_fRotateA = 50;
	

}
void Shapes::draw(sf::RenderTarget& target, sf::RenderStates states)const 
{
	target.draw(m_ShapeVA, state); //!< Passes in the vertex array as the target and the render state.
}


void Shapes::TransformShape(float x, float y) //!< Translation method.
{
	m_fTransformX = x;
	m_fTransformY = y;
	for (int i = 0; i < m_ShapeVA.getVertexCount(); i++) //!< For each point in the vertex array, alter the position by the given values.
	{
		m_ShapeVA[i].position.x += x;
		m_ShapeVA[i].position.y += y;
	}

}

void Shapes::RotateShape(float angle)
{
	//m_fRotateA = angle;
	m_Rotation.rotate(angle, m_ShapeVA[0].position); //!< Use the transform to rotate the shape around its initial vertex by the given angle.
	state.transform = m_Rotation; //!< Set the state of the shape transformation to rotation.
}

void Shapes::ScaleShape(float scale)
{

	m_Rotation.scale(sf::Vector2f(scale, scale), m_ShapeVA[0].position); //!< Set the transform to be a vector of the scale value, and apply this at the initial vertex of the shape.
	state.transform = m_Rotation; //!< Set the state of the shape transformation to scale calculation.
}

void Shapes::SetRotating(bool rotating) //!< Set the bool to true or false depending on the state of the shape.
{
	m_bIsRotating = rotating;
}

bool Shapes::GetRotating() //!< Return the bool for if the shape is rotating.
{
	return m_bIsRotating;
}


