#include "SFML/Graphics.hpp"

#pragma once


class Shapes : public sf::Drawable
{
public:
	Shapes();

	~Shapes();

	void draw(/*stuff that goes in here please it wont auto suggest*/);

protected:
	//! Vertex Array to store the points for the shapes.
	sf::VertexArray m_ShapeVA;

private:

};

