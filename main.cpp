#include "Header.hpp"
#include "GameRunner.hpp"

int main() {
	srand(time(NULL));
	
	GameRunner PA9Application;

	PA9Application.playGame();

	return 0;
}
