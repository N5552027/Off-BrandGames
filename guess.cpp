#include "guess.hpp"

Guess::Guess(const int& size, const sf::Vector2f& pos, const sf::Color& color, const sf::Font& font)
{

	this->setCharacterSize(size);
	this->setPosition(pos);
	this->setFillColor(color);
	this->setFont(font);
	this->setString(" ");

}

std::string Guess::getstring() const
{
	return this->getString();
}
