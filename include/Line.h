#pragma once
#include "Shapes.h"
class Line :
	public Shapes
{
public:
	Line();
	//Line();
	~Line();

	void CreateLine() 
	{

	}

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const;

protected:


private:

};

