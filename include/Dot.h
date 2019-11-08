#pragma once
#include "Shapes.h"
class Dot :
	public Shapes
{
public:
	Dot();
	Dot(float pointX, float pointY);
	~Dot();

	void CreateDot(sf::Vector2f pos, sf::Color colour);
	sf::Vector2f GetPosition();

	void SetPosition(float pointX, float pointY);
	
private:

	float m_fPX, m_fPY;

};

