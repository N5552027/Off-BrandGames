#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
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


private:



};

class Guess :public sf::Text
{

public:

	Guess(const int& size, const sf::Vector2f& pos, const sf::Color& color, const sf::Font& font)
	{

		this->setCharacterSize(size);
		this->setPosition(pos);
		this->setFillColor(color);
		this->setFont(font);
		this->setString(" ");
		
	}
	
	std::string getstring(void) {
		return this->getString();
	}

};