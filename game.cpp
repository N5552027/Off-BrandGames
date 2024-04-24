#include "game.hpp"
#include "boards.hpp"
#include "header.hpp"



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



bool fiveLetters ::compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord)
{
	char letter = '\0';
	int n = 0;

	for (int i = 0; i < 5; i++) {
		


		for (int k = 0; k < 5; k++) {

			 letter = playerGuess[i].getstring()[0];

			
			if ( letter == secretWord[k]) {
				
				
				guessRow[i].setYellow();
				
			}


		}




		letter = playerGuess[i].getstring()[0];
		if (letter == secretWord[i]) {

			
			guessRow[i].setGreen();
			n++;

		}

		if (n == 5) {

			return true;
			
		}


	}






	return false;
}

void fiveLetters::loadWordBank()
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

void fiveLetters::chooseMysteryWord(const std::string& filePath)
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
	/*std::cout << "Mystery Word = " << mysteryWord << std::endl;*/ // debugging help

	// Close the file
	inFile.close();
}


