#pragma once

#include "Header.hpp"
#include "GameMode.hpp"
#include "Graphics.hpp"

class FiveLM : public GameMode {
private:
	int cols = 5;

	// OPENS .txt file for 5-letter word bank
	void openTXTFile() override;

	// runs basic game mode suited for 5LM
	bool basicGameMode() override;
	void ThreeLivesEnduranceMode() override;
public:

	void runGame() override;
};
