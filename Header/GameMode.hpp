#pragma once
#include "Header.hpp"
#include "Graphics.hpp"

// === ABSTRACT CLASS ===

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

	// compares the guess to the word, and determines what letters are correct, which ones are in the word but not in the right spot, and which aren't in the word.
	bool compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord);

	/************************\
	|       GAME MODES       |
	\************************/
	virtual bool basicGameMode();
	virtual void ThreeLivesEnduranceMode();

	// Print Rules
	void gameModeRules();

public:

	virtual void runGame();

};
