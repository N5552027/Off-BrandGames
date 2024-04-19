#pragma once

#include "Header.hpp"
#include "GameMode.hpp"

class FiveLM : public GameMode {
private:
	int cols = 5;

	void openTXTFile() override;
public:

	void runGame() override;
};
