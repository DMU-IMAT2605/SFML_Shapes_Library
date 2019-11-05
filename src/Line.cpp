#include "Line.h"



Line::Line()
{
}


Line::~Line()
{
}

void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(m_ShapeVA);
}
