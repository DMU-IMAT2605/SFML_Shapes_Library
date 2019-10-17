#pragma once
#include "Shapes.h"
class Arc :
	public Shapes
{
public:
	Arc();
	~Arc();


	// Getters //
	float GetRadius();
	float GetCentre();
	float GetAngles();

	// Setters //
	float SetRadius();
	float SetCentre();
	float SetAngles();


protected:
	//! Floats to define the radius sizes for the arc.
	float m_fX1, m_fX2, m_fY1, m_fY2; 
	//! Floats to define where the centre of the arc is.
	float m_fCX, m_fCY;
	//! Floats to determine the starting and ending angles of the arc.
	float m_fA1, m_fA2;


private:

};

