#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <chrono>

class FiveLM {
private:
	int cols = 5;

	std::ifstream fiveStream;
protected:
	int lives = 3;

	// generates the blank board with the correct # of dark grey boxes derived from row & cols count
	void generateBoard(int rows, int cols);

	// takes a random word from the dedicated mode file, and designates it as the word
	void chooseMysteryWord(std::string& mysteryWord);

	// prompts user for a guess and stores it for later use;
	void getPlayerGuess(std::string &guess);

	// compares the guess to the word, and determines what letters are correct, which ones are in the word but not in the right spot, and which aren't in the word.
	void compareGuessToWord(const std::string guess, const std::string word);

	// updates the current box with the type it needs to be
	void updateBox(int boxType, int row, int cols);

	// displays the different stats of the player
	void displayStats();
public:

	int rows = 6;

	void runGame();
};

#include "LetterGameModes.hpp"

void FiveLM::generateBoard(int rows, int cols)
{
}

void FiveLM::chooseMysteryWord(std::string& mysteryWord)
{
}

void FiveLM::getPlayerGuess(std::string& guess)
{
}

void FiveLM::compareGuessToWord(const std::string guess, const std::string word)
{
}

void FiveLM::updateBox(int boxType, int row, int cols)
{
}

void FiveLM::displayStats()
{
}

void FiveLM::runGame()
{
}
