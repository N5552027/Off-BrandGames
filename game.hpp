#pragma once
#include "header.hpp"
#include "boards.hpp"
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
	
	virtual void loadWordBank()=0;
	
	


	// takes a random word from the dedicated mode file, and designates it as the word
	virtual void chooseMysteryWord(const std::string& filePath) = 0;

	
	

	
	



	// compares the guess to the word, and determines what letters are correct, which ones are in the word but not in the right spot, and which aren't in the word.
	virtual bool compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord) = 0;


	
	

};

class fiveLetters : public GameMode
{

public:

	
	bool compareGuessToWord(std::vector<Guess>& playerGuess, std::vector<Box>& guessRow, std::string secretWord);

	void fiveLetters::chooseMysteryWord(const std::string& filePath);
	void fiveLetters::loadWordBank();

	
	
private:
	
};

