#include "GameMode.hpp"

void GameMode::generateBoard(int rows, int cols)
{
}

void GameMode::chooseMysteryWord()
{
	mysteryWord = mysteryWordBank[rand() % mysteryWordBankSize];
	std::cout << "Mystery Word = " << mysteryWord << std::endl;

}

bool GameMode::compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord)
{
	return false;
}

void GameMode::openTXTFile()
{
	std::cout << "OPENING FILE STREAM" << std::endl;
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

bool compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord)
{
	int guessLetterIndex, guessBoxIndex;

	bool letterPresence = false;

	char letter = '\0';

	for (int secretWordIndex = 0, playerGuessIndex = 4; secretWordIndex < 5; secretWordIndex++, playerGuessIndex--) {

		for (int secretWordIndexYellow = 0; secretWordIndexYellow < 5; secretWordIndexYellow++) {

			letter = playerGuess[playerGuessIndex].getstring()[0]; 

			std::cout << letter << std::endl;
			if (letter == secretWord[secretWordIndexYellow]) {

				guessRow[playerGuessIndex].setYellow();
			}
		}

		letter = playerGuess[playerGuessIndex].getstring()[0];
		if (letter == secretWord[secretWordIndex]) {

			guessRow[playerGuessIndex].setGreen(); 

		}
	}

	return false;
}



bool GameMode::basicGameMode()
{
	// VIRTUAL: DEFINITIONS IN INHERITED CLASSES
	return false;
}

void GameMode::ThreeLivesEnduranceMode()
{
	// VIRTUAL: DEFINITIONS IN INHERITED CLASSES
}

void GameMode::gameModeRules()
{
	std::cout << "WELCOME TO CURSED WORDLE" << std::endl;
	std::cout << "There are three game modes:<< std::endl"
		<< "\t 4-letter" << std::endl
		<< "\t 5-letter" << std::endl
		<< "\t 6-letter" << std::endl
		<< "Where each corresponds to the length of the mystery word. Don't worry, there are NO repeated characters AND we don't check if it exists in the dictionary or not." << std::endl;

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
