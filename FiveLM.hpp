#pragma once

#include "Header.hpp"
#include "GameMode.hpp"

class FiveLM : public GameMode {
private:
	int cols = 5;

	// OPENS .txt file for 5-letter word bank
	void openTXTFile() override;

	// runs basic game mode suited for 5LM
	void basicGameMode() override;
	void 3LivesEnduranceMode() override;
public:

	void runGame() override;
};
