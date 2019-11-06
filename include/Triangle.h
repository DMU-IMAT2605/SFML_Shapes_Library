#pragma once
#include "Shapes.h"
class Triangle : public Shapes
{
public:

	Triangle();
	Triangle(sf::Vector2f pos1, sf::Vector2f pos2, sf::Vector2f pos3);

	void CreateTriangle(sf::Color colour);
	

	
protected:


private:

	sf::Vector2f m_fPos1, m_fPos2, m_fPos3;

};

