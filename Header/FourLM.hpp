#pragma once

#include "Header.hpp"
#include "GameMode.hpp"

class FourLM : public GameMode{
protected:

	int cols = 4;

	void openTXTFile() override;
public:

	void runGame() override;

};
