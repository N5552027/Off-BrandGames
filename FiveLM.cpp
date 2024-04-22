#include "FiveLM.hpp"

void FiveLM::runGame()
{
	int playerMenuChoice = 0,
		vectorIndex = 0,
		leaveMenuOption = -1;

	openTXTFile();
	loadWordBank();

	std::cin.clear();

	do
	{
		system("cls");
		std::cout << "FIVE LETTER GAME MODE:" << std::endl;
		
		// DISPLAY PLAYER STATS HERE PERHAPS?
		
		std::cin >> playerMenuChoice;


		switch (playerMenuChoice) {

		default:
			std::cin.clear();
			system("cls");
			
			std::cout << "DEFAULT CHOICE" << std::endl;
			break;
		case 1:  // PLAY BASIC
			std::cin.clear();
			system("cls");
			
			do 
			{
				system("cls");
				std::cout << "PLAYING BASIC GAME MODE (IT'S BASICALLY WORDLE)" << std::endl;
			
				runBasicGameMode();

				std::cout << "\n\n" << std::endl; // SEPERATES THE GAME NEEDED		

				std::cout << "Would you like to play again? (0 for yes, 1 for no)" << std::endl;
				std::cin >> leaveMenuOption;
			
			} while(leaveMenuOption != 1);
			
			break;
		case 2: // PRINT WORD BANK [THIS CASE WILL NOT BE PRESENT IN THE FINAL BUILD]
			std::cin.clear();
			system("cls");
	
			std::cout << "ALL POSSIBLE WORDS AT PLAY" << std::endl;
			
			while (vectorIndex < mysteryWordBankSize) {

				std::cout << mysteryWordBank[vectorIndex] << std::endl;
				vectorIndex++;
			}


			system("pause");

			break;
		
		case 3: // THREE LIVES ENDURANCE MATCH
			system("cls");
			std::cout << "" << std::endl;
			3LivesEnduranceMode();
			system("pause");
		break;
		case 4:
		
			std::cout << "EXITING GAMEMODE" << std::endl;
		
		break;
		}
		

	} while (playerMenuChoice != 4);
}

void FiveLM::openTXTFile()
{
	this->inFileLoad.open("5LetterWord.txt");
}

bool FiveLM::runBasicGameMode() {
								// REPLACE playerGuess with Vector of boxes later
bool isPlayerCorrect = false;					
int playerGuesses = 1;

chooseMysteryWord();

	do 
	{	
		playerGuess = getPlayerGuess(cols);
		isPlayerCorrect = compareGuessToWord(playerGuess, mysteryWord); // CHANGE TO BOOL OPERATION LATER

		if (isPlayerCorrect == false) {
			++playerGuesses; // PLAYER GUESS NUMBER CAN BE USED TO CHECK WHICH ROW TO MANAGE/EDIT ON THE VECTOR
		}
		
	} while (playerGuesses < 7 || playerGuess == true) // ESCAPE CONDITION: Player guesses correct word OR player guess exceeds 6
	
if (isPlayerCorrect == false) { // PLAYER FAILS TO GUESS THE WORD IN 6 TURNS

	std::cout << "Sorry, you lost!" << std::endl;
	return false;
}
else { // PLAYER MANAGES TO GUESS THE MYSTER WORD IN 6 TURNS OR LESS
	std::cout << "CONGRATS YOU WON!!" << std::endl
		<< "*trumpets and fanfare plays in the background*" << std::endl;
	return true;
}
}


void FiveLM::3LivesEnduranceMode () {
	int solvedWords, roundCount, wordsSolved = 0;
	int lives = 3;
	bool roundWon = false;
	
	while (lives > 0) {
		// Display lives && round count
		std::cout << "Lives Remaining: " << lives << std::endl
			<< "Rounds Played: " << roundCount << std::endl
			<< "Words Solved: " << wordsSolved << std::endl;; 
		// RUN BASIC GAME MODE
		roundWon = runBasicGameMode();
		
		if (roundWon == false) { // Player fails to win the round
			lives = lives - 1;
		}
		else { // PLAYER WINS ROUND
			wordsSolved++;
		}

		roundCount++;
	}

	// DISPLAY END OF ROUND STATS
	std::cout << "END OF GAME STATUS:" << std::endl
		<< "\t After three lives, you've solved " << wordsSolved << " words.";
}
