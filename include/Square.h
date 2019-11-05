#pragma once
#include "Rectangle.h"
class Square :	public Rectangle
{
public:
	Square();
	Square(sf::Vector2f origin, float width);

	void CreateSquare(sf::Vector2f origin, sf::Color colour);

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

protected:


private:


};

