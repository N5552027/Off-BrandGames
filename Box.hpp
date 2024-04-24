#pragma once 

#include <SFML/Graphics.hpp>

class Box : public sf::RectangleShape
{
public:

	Box(const sf::Vector2f& size, const sf::Vector2f& pos, const sf::Color& color) :sf::RectangleShape(size)
	{
		this->setPosition(pos);
		this->setFillColor(color);
	}

	void setGreen();

	void setYellow();

};