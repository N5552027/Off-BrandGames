#include "game.hpp"
#include "header.hpp"
#include "guess.hpp"
#include "box.hpp"

void GameMode::loadWordBank()
{
	while (!this->inFileLoad.eof()) { // END CONDITION: END OF TXT FILE
		std::string temp;
		std::getline(inFileLoad, temp);
		mysteryWordBank.push_back(temp);
		mysteryWordBankSize++;
	}
	std::cout << "WORD BANK LOADED!" << std::endl;
	inFileLoad.close();
}

void GameMode::chooseMysteryWord(const std::string& filePath)
{
    // Open the file
    std::ifstream inFile(filePath);
    if (!inFile.is_open()) 
    {
        std::cerr << "Error opening file: " << filePath << std::endl;
        // Handle error (e.g., file not found)
        return;
    }

    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Count the number of words in the file
    int numWords = 0;
    std::string word;
    while (inFile >> word) 
    {
        ++numWords;
    }

    // Reset the file stream to the beginning of the file
    inFile.clear();
    inFile.seekg(0, std::ios::beg);

    // Generate a random word index within the range of the number of words
    int randomWordIndex = std::rand() % numWords;

    // Skip to the randomly selected word
    for (int i = 0; i < randomWordIndex; ++i)
    {
        inFile >> word;
    }

    // Assign the randomly selected word as the mystery word
    mysteryWord = word;
    std::cout << "Mystery Word = " << mysteryWord << std::endl; // debugging help

    // Close the file
    inFile.close();
}


bool GameMode::compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string mysteryWord)
{
	char letter = '\0';
	for (int i = 0, j = 4; i < 5; i++, j--) {


		for (int k = 0; k < 5; k++) {

			letter = playerGuess[j].getstring()[0];

			std::cout << letter << std::endl;
			if (letter == mysteryWord[k]) {

				guessRow[j].setYellow();
			}


		}

		letter = playerGuess[j].getstring()[0];
		if (letter == mysteryWord[i]) {

			guessRow[j].setGreen();

		}



	}

	return false;
}

void GameMode::openTXTFile()
{
	std::cout << "OPENING FILE STREAM" << std::endl;
}