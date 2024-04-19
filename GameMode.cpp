#include "GameMode.hpp"

void GameMode::generateBoard(int rows, int cols)
{
}

void GameMode::chooseMysteryWord()
{
	mysteryWord = mysteryWordBank[rand() % mysteryWordBankSize];
	std::cout << "Mystery Word = " << mysteryWord << std::endl;

}

void GameMode::openTXTFile()
{
	std::cout << "OPENING FILE STREAM" << std::endl;
}


std::string GameMode::getPlayerGuess(int wordLength)
{
	std::string guess;

	while (1) {
		std::cout << "Enter a " << wordLength << "-letter word: ";
		std::cin >> guess;
		if (guess.length() == wordLength) {
			break;
		}
		else {
			system("cls");
		}
	}
	return guess;
}

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

void GameMode::compareGuessToWord(std::string playerGuess, std::string secretWord)
{
	std::string::iterator playerGuessIterator,
							secretWordIterator;
	int guessLetterIndex,
		secretLetterIndex;

	bool letterPresence = false;

		for (playerGuessIterator = playerGuess.begin(), guessLetterIndex = 0; playerGuessIterator != playerGuess.end(); playerGuessIterator++, guessLetterIndex++) { // TRAVERSE THE PLAYER GUESS\
			
			letterPresence = false;

			for (secretWordIterator = secretWord.begin(), secretLetterIndex = 0; secretWordIterator != secretWord.end(); secretWordIterator++, secretLetterIndex++) { // TRAVERSE THE MYSTERY WORD


				if (*playerGuessIterator == *secretWordIterator) // LETTER FOUND
				{
					letterPresence = true;

					if (guessLetterIndex == secretLetterIndex) {  // INDEX MATCH (CHANGE TO GREEN)
						std::cout << "The letter " << *playerGuessIterator << " is at index " << guessLetterIndex << std::endl
							<< "The Mystery Word also has the letter " << *secretWordIterator << " at index " << secretLetterIndex << std::endl
							<< " It's a match! " << std::endl;
					}
					else {	// INDEXES DON'T MATCH (CHANGE TO YELLOW)
						std::cout << "The letter " << *playerGuessIterator << " is at index " << guessLetterIndex << std::endl
							<< "The mystery Word also has the letter " << *secretWordIterator << " at index " << secretLetterIndex << std::endl
							<< "It's not a match but at least the letter is there!" << std::endl;
					}
				}
				
			}

			if (letterPresence == false) {
				std::cout << "The letter " << *playerGuessIterator << " is at index " << guessLetterIndex << std::endl
					<< "The mystery word does not contain the letter " << *playerGuessIterator << " in any index. " << std::endl
					<< "It's not in the word!" << std::endl;
			}

		
		}
}

void GameMode::updateBox(int boxType, int row, int cols)
{
}

void GameMode::displayStats()
{
}

void GameMode::runGame()
{
	// ALL GAME MODES ARE DEFINED BASED ON THEIR OVERRIDEN FUNCTION. NO CODE HAPPENS HERE
}
