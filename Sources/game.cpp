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

void GameMode::chooseMysteryWord()
{
	mysteryWord = mysteryWordBank[rand() % mysteryWordBankSize];
	std::cout << "Mystery Word = " << mysteryWord << std::endl;

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

void GameMode::openTXTFile()
{
	std::cout << "OPENING FILE STREAM" << std::endl;
}

