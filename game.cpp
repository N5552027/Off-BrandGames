#include "game.hpp"

#include "Header.hpp"
# include <string>


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

void GameMode::chooseMysteryWord()
{
	mysteryWord = mysteryWordBank[rand() % mysteryWordBankSize];
	std::cout << "Mystery Word = " << mysteryWord << std::endl;

}

bool GameMode::compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord)
{
	char letter = '\0';
	for (int i = 0, j = 4; i < 5; i++, j--) {



		for (int k = 0; k < 5; k++) {

			 letter = playerGuess[j].getstring()[0];

			std::cout << letter << std::endl;
			if ( letter == secretWord[k]) {

				guessRow[j].setYellow();
			}


		}




		letter = playerGuess[j].getstring()[0];
		if (letter == secretWord[i]) {

			guessRow[j].setGreen();

		}



	}






	return false;
}

void GameMode::openTXTFile()
{
	std::cout << "OPENING FILE STREAM" << std::endl;
}
