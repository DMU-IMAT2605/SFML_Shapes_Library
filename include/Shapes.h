#include "SFML/Graphics.hpp"

#pragma once


class Shapes : public sf::Drawable, public sf::Transformable
{
public:
	Shapes();
	Shapes(sf::Color shapeColour);
	~Shapes();
	sf::RenderStates state;

	void TransformShape(float x, float y);
	void RotateShape(float angle);
	void ScaleShape(float scale);
	void SetRotating(bool rotating);
	bool GetRotating();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

	
protected:
	//! Vertex Array to store the points for the shapes.
	sf::VertexArray m_ShapeVA;

private:
	sf::Color m_ShapeCol;
	sf::Transform m_Rotation;
	
	float m_fTransformX = 0, m_fTransformY = 0, m_fRotateA = 0, m_fScale = 1; //!< Members used to move, rotate, and scale the shape.
	bool m_bIsRotating = false;
};

