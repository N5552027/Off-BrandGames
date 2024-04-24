#pragma once

#include "Header.hpp"
#include "FourLM.hpp"
#include "FiveLM.hpp"
#include "SixLM.hpp"

class GameRunner {
private:
	FourLM FourLetterGameMode;
	FiveLM FiveLetterGameMode;
	SixLM  SixLetterGameMode;

	void displayModes();
public:

	void playGame();



};
