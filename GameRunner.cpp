#include "GameRunner.hpp"

void GameRunner::displayModes()
{

}

void GameRunner::playGame()
{
int choice;

	do {
		
		std::cout << "1. choose this mode for FLM " << std::endl;
		std::cin >> choice;
		switch (choice) {
		default:
			std::cout << "BAD CHOICE >:(" << std::endl;
			break;
		case 1: // Five
			FiveLetterGameMode.runGame();  
			break;







		}
	} while (choice != 5);
}
