#pragma once
#include "Shapes.h"
class Rectangle :	public Shapes
{
public:
	 
	Rectangle();
	Rectangle();

	void CreateRectangle(sf::Vector2f origin, float width, float height, sf::Color colour);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

protected:

	float m_fH, m_fW; //!< Used to define the width and height of the quad.
	float m_fO; //!< Sets the origin of the quad. This is where the quad will begin drawing from.

private:

};

