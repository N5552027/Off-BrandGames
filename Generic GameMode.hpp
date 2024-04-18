#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <chrono>

class GameMode {
private:
	int cols;

	std::ifstream libStream;
protected:

	int lives = 3;
	int rows = 6;

	// generates the blank board with the correct # of dark grey boxes derived from row & cols count
	void generateBoard(int rows, int cols);

	// takes a random word from the dedicated mode file, and designates it as the word
	void chooseMysteryWord(std::string& mysteryWord);

	// prompts user for a guess and stores it for later use;
	std::string getPlayerGuess(int wordLength);

	// compares the guess to the word, and determines what letters are correct, which ones are in the word but not in the right spot, and which aren't in the word.
	void compareGuessToWord(const std::string guess, const std::string word);

	// updates the current box with the type it needs to be
	void updateBox(int boxType, int row, int cols);

	// displays the different stats of the player
	void displayStats();
public:

	void runGame();

};
