



//must change to release mode and copy files from debug to release
#include <SFML/Graphics.hpp>


#include "boards.hpp"
#include"game.hpp"
#include "window.hpp"
int main()
{

	int i = 0;
	int j = 0;
	sf::Font font;

	font.loadFromFile("arial.ttf");
	

	fiveLetters mode;

	
	
	/* USED TO GENERATE BOX ROWS*/
	std::vector<Box> gamebox1; // Row 1
	std::vector<Box> gamebox2; // Row 2
	std::vector<Box> gamebox3; // Row 3
	std::vector<Box> gamebox4; // Row 4
	std::vector<Box> gamebox5; // Row 5
	std::vector<Box> gamebox6; // Row 6

	/* GAME BOARD (ALLOWS CHANGE OF COLOR)*/
	std::vector<std::vector<Box>> gameboard;

	gameboard.emplace(gameboard.begin(), gamebox1);
	gameboard.emplace(gameboard.begin(), gamebox2);
	gameboard.emplace(gameboard.begin(), gamebox3);
	gameboard.emplace(gameboard.begin(), gamebox4);
	gameboard.emplace(gameboard.begin(), gamebox5);
	gameboard.emplace(gameboard.begin(), gamebox6);


	/* PLAYER GUESS LETTERS (USE TO REPLACE STRINGS)*/
	std::vector<Guess> letter1; // PLAYER GUESS 1
	std::vector<Guess> letter2; // PLAYER GUESS 2
	std::vector<Guess> letter3; // PLAYER GUESS 3
	std::vector<Guess> letter4; // PLAYER GUESS 4
	std::vector<Guess> letter5; // PLAYER GUESS 5
	std::vector<Guess> letter6; // PLAYER GUESS 6

	/* PLAYER GUESS WORDLE (LETTERS ARE SEPERATE TO THEIR BOXES)*/
	std::vector<std::vector<Guess>> wordboard;

	wordboard.emplace(wordboard.begin(), letter1);
	wordboard.emplace(wordboard.begin(), letter2);
	wordboard.emplace(wordboard.begin(), letter3);
	wordboard.emplace(wordboard.begin(), letter4);
	wordboard.emplace(wordboard.begin(), letter5);
	wordboard.emplace(wordboard.begin(), letter6);


	





	for (int j = 0; j < 6; j++) { 



		for (int i = 0; i < 5; i++) { 


			Box box(sf::Vector2f(100, 100), sf::Vector2f(80 + 120 * i, 20 + 120 * j), sf::Color(99, 102, 106));

			gameboard[j].emplace(gameboard[j].end(), box);

		}


	}


	for (int j = 0; j < 6; j++) { 



		for (int i = 0; i < 5; i++) { 


			Guess guess(100, sf::Vector2f(95 + 120 * i, 5 + 120 * j), sf::Color::White, font);

			wordboard[j].emplace(wordboard[j].end(), guess);

		}


	}

	
	menuScreen(gameboard, wordboard, font);

	mainGame(gameboard, wordboard, font, j, i, mode);

	

	return 0;
}