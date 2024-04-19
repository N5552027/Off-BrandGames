#include "GameMode.hpp"

void GameMode::generateBoard(int rows, int cols)
{
}

void GameMode::chooseMysteryWord(std::string& mysteryWord)
{
	std::ifstream file("..."); // depending on file

	if (!file.is_open()) 
	{
        	std::cerr << "Error: Unable to open file.\n";
        	return;
	}

	// read words from file into a vector
	std::vector<std::string> words;
	std::string word;
	while(file >> word)
	{
		words.push_back(word);
	}

	file.close();

	if (words.empty()) 
	{
        	std::cerr << "Error: No words found in file.\n";
        	return;
	}

	// random generation of word from vector 
	srand(static_cast<unsigned int>(time)nullptr))); // seed the rng
	int randomIndex = rand() % words.size();
	mysteryWord = words[randomIndex];
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
