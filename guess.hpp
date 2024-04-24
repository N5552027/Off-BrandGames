#pragma once

#include "header.hpp"

class Guess :public sf::Text
{

public:

	Guess(const int& size, const sf::Vector2f& pos, const sf::Color& color, const sf::Font& font);

	std::string getstring() const;

};