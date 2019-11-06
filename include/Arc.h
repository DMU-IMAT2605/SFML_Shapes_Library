#pragma once
#include "Shapes.h"
class Arc :	public Shapes
{
public:
	Arc();
	Arc(float radX, float radY, float startA, float endA, float cenX, float cenY);
	~Arc();

	void CreateArc(sf::Vector2f arcPos, sf::Color arcColour);
	
	// Getters //
	sf::Vector2f GetRadius();
	sf::Vector2f GetCentre();
	float GetAngles();

	// Setters //
	void SetRadius(float radX,float radY); //!< Sets the radius of the arc.
	void SetCentre(float cenX,float cenY); //!< Sets the centre for the arc.
	void SetAngles(float startA, float endA); //!< Sets the length of the arc.


protected:
	//! Floats to define the radius sizes for the arc.
	float m_fRX, m_fRY; 
	//! Floats to define where the centre of the arc is.
	float m_fCX, m_fCY;
	//! Floats to determine the starting and ending angles of the arc.
	float m_fA1, m_fA2;
	//! Int to define the size of the vertex array.
	int m_iArrSize;
	//! Floats to define the angle theta and how much to increment by each iteration.
	float m_fTheta;
	float m_fThetaStep;

private:
	
};

