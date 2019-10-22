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
	void draw(sf::RenderTarget& target, sf::RenderStates states)const override;

	sf::Vector2f GetPosition();

	void SetPosition(float pointX, float pointY);

protected:

	
private:

	float m_fPX, m_fPY;

};

