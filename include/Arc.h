#pragma once
#include "Shapes.h"
class Arc :	public Shapes
{
public:
	Arc() {}; //!< Default constructor.
	Arc(float radX, float radY, float startA, float endA, float cenX, float cenY); //!< Constructor containing the values to assign on creation of Arc objects.
	~Arc();

	void CreateArc(sf::Vector2f pos, sf::Color colour); //!< Sets the initial values of the arc on creation.
	
	// Getters //
	sf::Vector2f GetRadius(); //!< Gets the radius of the arc. Used for external calculations.
	sf::Vector2f GetCentre(); //!< Gets the centre of the arc. Used for external calculations.
	float GetAngles();

	// Setters //
	void SetRadius(float radX,float radY); //!< Sets the radius of the arc.
	void SetCentre(float cenX,float cenY); //!< Sets the centre of the arc.
	void SetAngles(float startA, float endA); //!< Sets the length of the arc.


protected:
	//! Floats to define the radius sizes for the arc.
	float m_fRX, m_fRY; 
	//! Floats to define where the centre of the arc is.
	float m_fCX, m_fCY;
	//! Floats to determine the starting and ending angles of the arc.
	float m_fA1, m_fA2;
	//! Integer to define the size of the vertex array.
	int m_iArrSize;
	//! Floats to define the angle theta and how much to increment by each iteration.
	float m_fTheta;
	float m_fThetaStep;


};

