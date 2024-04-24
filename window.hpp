#include <SFML/Graphics.hpp>


#include "boards.hpp"
#include"game.hpp"

void menuScreen(std::vector<std::vector<Box>>& gameboard, std::vector<std::vector<Guess>>& wordboard, sf::Font& font);

void endScreen(sf::RenderWindow& window, std::vector<std::vector<Box>>& gameboard, std::vector<std::vector<Guess>>& wordboard, sf::Font& font, int& j, bool win,std::string last);
void mainGame( std::vector<std::vector<Box>>& gameboard, std::vector<std::vector<Guess>>& wordboard, sf::Font& font, int& j, int&i,fiveLetters&mode);
