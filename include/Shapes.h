#include "SFML/Graphics.hpp"

#pragma once


class Shapes : public sf::Drawable, public sf::Transformable
{
public:
	Shapes() {}; //!< Default constructor.
	Shapes(sf::Color shapeColour); //!< Constructor initialising the colour of base shapes.
	~Shapes() {};
	

	void TransformShape(float x, float y); //!< Method that translates the shape by the passed in floats.
	void RotateShape(float angle); //!< Method that rotates shapes by the passed angle.
	void ScaleShape(float scale); //!< Method to scale the shapes by a float scale.
	void SetRotating(bool rotating); //!< Sets whether the shape is already rotating. Used if the user wishes for the shape to continually rotate.
	bool GetRotating(); //!< Used to check if the shape is rotating.

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states)const; //!< The main draw method used by all shapes, allowing for transformations in the render state.

	
protected:
	//! Vertex Array to store the points for the shapes.
	sf::VertexArray m_ShapeVA;
	//! Render state used to update the state of the shape during transformations.
	sf::RenderStates state;
	//! Rainbow gradient colour.
	sf::Color RainbowColour[6]{ sf::Color::Red, sf::Color::Magenta, sf::Color::Blue, sf::Color::Cyan, sf::Color::Green, sf::Color::Yellow };
	int m_iColIncrement;

private:
	//! Defines the colour of the shape.
	sf::Color m_ShapeCol;
	//! Used to transform the shape. Adapts depending on whether it is a scale, rotate, or translate.
	sf::Transform m_Rotation;
	
	float m_fTransformX = 0, m_fTransformY = 0, m_fRotateA = 0, m_fScale = 1; //!< Members used to move, rotate, and scale the shape.
	bool m_bIsRotating = false;
};

