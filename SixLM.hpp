#pragma once

#include "Header.hpp"
#include "GameMode.hpp"

class SixLM : public GameMode{
private:

	int cols = 6;

	void openTXTFile() override;

public:

	void runGame() override;
};
