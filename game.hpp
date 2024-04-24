#pragma once
#include "header.hpp"
#include "Box.hpp"
#include "guess.hpp"
/* ----------------ABSTRACT CLASS------------------*/

class GameMode {
public:

	// ===== DATA MEMBERS =====
	int lives = 3;
	int rows = 6;
	int mysteryWordBankSize;

	std::ifstream inFileLoad;
	std::vector<std::string> mysteryWordBank;
	std::string mysteryWord;
	std::string playerGuess;

	// ===== FUNCTIONS =====
		// LOAD WORD BANK FUNCTIONS 
	virtual void openTXTFile();
	void loadWordBank();

	// generates the blank board with the correct # of dark grey boxes derived from row & cols count


	// takes a random word from the dedicated mode file, and designates it as the word
	void chooseMysteryWord(const std::string& filePath);

	// prompts user for a guess and stores it for later use;


	// compares the guess to the word, and determines what letters are correct, which ones are in the word but not in the right spot, and which aren't in the word.


	/************************\
	|       GAME MODES       |
	\************************/



	// Print Rules


	bool compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string mysteryWord);
	/*virtual void runGame();*/

};