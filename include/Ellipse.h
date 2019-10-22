#pragma once
#include "Arc.h"
class Ellipse :	public Arc

{
public:
	Ellipse();
	Ellipse(float radX, float radY, float cenX, float cenY);
	~Ellipse();

	void CreateEllipse(sf::Vector2f pos, sf::Color colour);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;


protected:


private:
};

