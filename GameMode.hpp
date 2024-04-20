#pragma once
#include "Header.hpp"

/* ----------------ABSTRACT CLASS------------------*/

class GameMode {
protected:

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
	void generateBoard(int rows, int cols);

	// takes a random word from the dedicated mode file, and designates it as the word
	void chooseMysteryWord();
	
	// prompts user for a guess and stores it for later use;
	std::string getPlayerGuess(int wordLegth);

	// compares the guess to the word, and determines what letters are correct, which ones are in the word but not in the right spot, and which aren't in the word.
	void compareGuessToWord(std::string playerGuess, std::string secretWord);

	// updates the current box with the type it needs to be
	void updateBox(int boxType, int row, int cols);

	// displays the different stats of the player
	void displayStats();

	// normal Game Mode (Guess the mystery word in 6 moves)
	virtual void basicGameMode();

	// Print Rules
	virtual void gameModeRules();

public:

	virtual void runGame();

};
