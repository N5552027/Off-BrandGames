#include "FourLM.hpp"

void FourLM::openTXTFile()
{
	this->inFileLoad.open("4LetterWord.txt");
}

void FourLM::runGame()
{
	int playerMenuChoice = 0,
		vectorIndex = 0;

	openTXTFile();
	loadWordBank();

	std::cin.clear();

	do
	{
		system("cls");
		std::cout << "FIVE LETTER GAME MODE:" << std::endl;
		std::cin >> playerMenuChoice;


		switch (playerMenuChoice) {

		default:
			std::cout << "DEFAULT" << std::endl;
			break;
		case 1:  // PLAY BASIC

			chooseMysteryWord();
			playerGuess = getPlayerGuess(5);
			compareGuessToWord(playerGuess, mysteryWord);

			system("pause");

			break;
		case 2: // PRINT WORD BANK

			while (vectorIndex < mysteryWordBankSize) {

				std::cout << mysteryWordBank[vectorIndex] << std::endl;
				vectorIndex++;
			}


			system("pause");

			break;
		}

	} while (playerMenuChoice != 4);
}
