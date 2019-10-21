#include "SFML/Graphics.hpp"

#pragma once


class Shapes : public sf::Drawable, public sf::Transformable
{
public:
	Shapes();
	Shapes(sf::Color shapeColour);
	~Shapes();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

	
protected:
	//! Vertex Array to store the points for the shapes.
	sf::VertexArray m_ShapeVA;

private:
	sf::Color m_ShapeCol;
};

