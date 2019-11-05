#pragma once
#include "Shapes.h"
class Triangle : public Shapes
{
public:

	Triangle();
	Triangle(float pos1, float pos2, float pos3);

	void CreateTriangle(sf::Color colour);
	

	
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

protected:


private:

	float m_fPos1, m_fPos2, m_fPos3;

};

