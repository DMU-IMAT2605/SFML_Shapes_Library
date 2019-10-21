#pragma once
#include "Ellipse.h"
class Circle : public Ellipse
{
public:
	Circle();
	Circle(float radXY, float cenX, float cenY);
	~Circle();
	void CreateCircle(sf::Vector2f pos, sf::Color colour);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	
protected:


private:
};

