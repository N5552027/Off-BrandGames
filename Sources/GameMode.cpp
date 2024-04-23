#include "Header.hpp"

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

/* // BASED ON CONSOLE SCREEN CODING
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
*/


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

bool compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord)
{
	int guessLetterIndex,
		secretLetterIndex;

	bool letterPresence = false;

		for (auto guessIterator = playerGuess.begin(), auto boxIterator = guessRow.begin(), guessLetterIndex = 0; playerGuessIterator != playerGuess.end(); playerGuessIterator++, guessLetterIndex++) { // TRAVERSE THE PLAYER GUESS
			
			letterPresence = false;

			for (std::string::iterator secretWordIterator = secretWord.begin(), secretLetterIndex = 0; secretWordIterator != secretWord.end(); secretWordIterator++, secretLetterIndex++) { // TRAVERSE THE MYSTERY WORD


				if (*guess == *secretWordIterator) // LETTER FOUND
				{
					letterPresence = true;

					if (guessLetterIndex == secretLetterIndex) {  // INDEX MATCH (CHANGE TO GREEN)
						guessRow[boxIterator].setGreen();
					}
					else {	// INDEXES DON'T MATCH (CHANGE TO YELLOW)
						guessRow[boxIterator].setYellow;
					}
				}
				
			}

			if (letterPresence == false) {
				guessRow[boxIterator].setGray();
			}

		
		}
}


void GameMode::gameModeRules() 
{
	std::cout << "WELCOME TO CURSED WORDLE" << std::endl;
	std::cout << "There are three game modes:<< std::endl
		<< "\t 4-letter" << std::endl
		<< "\t 5-letter" << std::endl
		<< "\t 6-letter" << std::endl
	<< "Where each corresponds to the length of the mystery word. Don't worry, there are NO repeated characters AND we don't check 
		if it exists in the dictionary or not." << std::endl;

	std::cout << "There are two supported gamemodes" << std::endl
		<< "\t Basic Game Mode" << std::endl
		<< "\t 3-life Endurance Mode" << std::endl;

	std::cout << "Basic gamemode is your basic wordle activity. You have six times to guess the game's chosen mystery word. There are some hard words and there are some easy ones. Play this gamemode as many times as you want." << std::endl;

	std::cout << "3-life Endurance Mode tests and tracks how many mystery words you can get correct before you lose all three lives. A life is lost only if you cannot guess the mystery word in your six guesses. We will track how many correct words you got." << std::endl;

	std::cout << "GOOD LUCK AND ENJOY THIS SCUFFED VERSION OF WORDLE" << std::endl;
}


void GameMode::runGame()
{
	// ALL GAME MODES ARE DEFINED BASED ON THEIR OVERRIDEN FUNCTION. NO CODE HAPPENS HERE
}
