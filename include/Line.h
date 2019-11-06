#pragma once
#include "Shapes.h"
class Line :
	public Shapes
{
public:
	//Line();
	Line();
	~Line();

	void CreateLine(sf::Vector2f point1, sf::Vector2f point2, sf::Color colour);

	

protected:


private:

};

