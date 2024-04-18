#include "GameMode.hpp"

void GameMode::generateBoard(int rows, int cols)
{
}

void GameMode::chooseMysteryWord(std::string& mysteryWord)
{
}

std::string GameMode::getPlayerGuess(int wordLength)
{
	std::string guess;

	while (true) {
		std::cout << "Enter a " << wordLength << "-letter word: ";
		std::cin >> guess;
		if (guess.length() == wordLength) {
			break;
		}
		else {
			std::cout << "Invalid input. Please enter a word that is " << wordLength << " letters long." << std::endl;
		}
	}
	return guess;
}

void GameMode::compareGuessToWord(const std::string guess, const std::string word)
{
}

void GameMode::updateBox(int boxType, int row, int cols)
{
}

void GameMode::displayStats()
{
}

void GameMode::runGame()
{
}
