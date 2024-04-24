#include <SFML/Graphics.hpp>

#include "Box.hpp"
#include "game.hpp"
#include "header.hpp"
#include "guess.hpp"

int main()
{

	int i = 4;
	int j = 0;

	sf::Font font;
	font.loadFromFile("Z:\\Library\\Fonts\\NewYork.ttf");

	GameMode mode;

	mode.loadWordBank();

	mode.chooseMysteryWord("C:\\Users\\rubsacc\\Downloads\\Pong\\Pong\\Pong\\5letterwords.txt");

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Wordle!");

	// USED TO GENERATE BOX ROWS
	std::vector<Box> gamebox1; // Row 1
	std::vector<Box> gamebox2; // Row 2
	std::vector<Box> gamebox3; // Row 3
	std::vector<Box> gamebox4; // Row 4
	std::vector<Box> gamebox5; // Row 5
	std::vector<Box> gamebox6; // Row 6

	// GAME BOARD (ALLOWS CHANGE OF COLOR)
	std::vector<std::vector<Box>> gameboard;

	gameboard.emplace(gameboard.begin(), gamebox1);
	gameboard.emplace(gameboard.begin(), gamebox2);
	gameboard.emplace(gameboard.begin(), gamebox3);
	gameboard.emplace(gameboard.begin(), gamebox4);
	gameboard.emplace(gameboard.begin(), gamebox5);
	gameboard.emplace(gameboard.begin(), gamebox6);


	// PLAYER GUESS LETTERS (USE TO REPLACE STRINGS)
	std::vector<Guess> letter1; // PLAYER GUESS 1
	std::vector<Guess> letter2; // PLAYER GUESS 2
	std::vector<Guess> letter3; // PLAYER GUESS 3
	std::vector<Guess> letter4; // PLAYER GUESS 4
	std::vector<Guess> letter5; // PLAYER GUESS 5
	std::vector<Guess> letter6; // PLAYER GUESS 6

	// PLAYER GUESS WORDLE (LETTERS ARE SEPERATE TO THEIR BOXES)
	std::vector<std::vector<Guess>> wordboard;

	wordboard.emplace(wordboard.begin(), letter1);
	wordboard.emplace(wordboard.begin(), letter2);
	wordboard.emplace(wordboard.begin(), letter3);
	wordboard.emplace(wordboard.begin(), letter4);
	wordboard.emplace(wordboard.begin(), letter5);
	wordboard.emplace(wordboard.begin(), letter6);








	for (int j = 0; j < 6; j++) { // prints each row



		for (int i = 0; i < 5; i++) { // print each box 


			Box box(sf::Vector2f(100, 100), sf::Vector2f(80 + 120 * i, 20 + 120 * j), sf::Color(99, 102, 106));

			gameboard[j].emplace(gameboard[j].begin(), box);

		}


	}


	for (int j = 0; j < 6; j++) { // print each row



		for (int i = 0; i < 5; i++) { // print each box


			Guess guess(100, sf::Vector2f(95 + 120 * i, 5 + 120 * j), sf::Color::White, font);

			wordboard[j].emplace(wordboard[j].begin(), guess);

		}


	}









	while (window.isOpen()) // open window
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			else if (event.type == sf::Event::KeyReleased) {

				if (j > 5) {
					// prevents line overloading
				}

				else if (event.key.code == sf::Keyboard::BackSpace) {

					/*std::cout << "key pressed" << std::endl;*/

					if (i != 4) {
						wordboard[j][i + 1].setString(" ");

						i++;
					}
				}


				else if (event.key.code == sf::Keyboard::Enter) {

					// PLAYER SUBMITS A GUESS


					mode.compareGuessToWord(wordboard[j], gameboard[j], mode.mysteryWord);

					j++;
					i = 4;

				}


				else if (i < 0) {

				}


				else if (event.key.code == sf::Keyboard::A) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("a");

					i--;


				}
				else if (event.key.code == sf::Keyboard::B) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("b");

					i--;


				}
				else if (event.key.code == sf::Keyboard::C) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("c");

					i--;


				}
				else if (event.key.code == sf::Keyboard::D) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("d");

					i--;


				}
				else if (event.key.code == sf::Keyboard::E) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("e");

					i--;


				}
				else if (event.key.code == sf::Keyboard::F) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("f");

					i--;


				}
				else if (event.key.code == sf::Keyboard::G) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("g");

					i--;


				}
				else if (event.key.code == sf::Keyboard::H) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("h");

					i--;


				}
				else if (event.key.code == sf::Keyboard::I) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("i");

					i--;


				}
				else if (event.key.code == sf::Keyboard::J) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("j");

					i--;


				}
				else if (event.key.code == sf::Keyboard::K) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("k");

					i--;


				}
				else if (event.key.code == sf::Keyboard::L) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("l");

					i--;


				}
				else if (event.key.code == sf::Keyboard::M) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("m");

					i--;


				}
				else if (event.key.code == sf::Keyboard::N) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("n");

					i--;


				}
				else if (event.key.code == sf::Keyboard::O) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("o");

					i--;


				}
				else if (event.key.code == sf::Keyboard::P) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("p");

					i--;


				}
				else if (event.key.code == sf::Keyboard::Q) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("q");


					i--;


				}
				else if (event.key.code == sf::Keyboard::R) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("r");

					i--;


				}
				else if (event.key.code == sf::Keyboard::S) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("s");

					i--;


				}
				else if (event.key.code == sf::Keyboard::T) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("t");

					i--;


				}
				else if (event.key.code == sf::Keyboard::U) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("u");

					i--;


				}
				else if (event.key.code == sf::Keyboard::V) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("v");

					i--;


				}
				else if (event.key.code == sf::Keyboard::W) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("w");

					i--;


				}
				else if (event.key.code == sf::Keyboard::X) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("x");

					i--;


				}
				else if (event.key.code == sf::Keyboard::Y) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("y");

					i--;


				}
				else if (event.key.code == sf::Keyboard::Z) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("z");

					i--;


				}
			}
		}











		//attempt at live typing loop


		/*if (event.type == sf::Event::KeyReleased) {


			std::cout << "key pressed" << std::endl;
		}*/
		//if (event.key.code == sf::Keyboard::S) {


		//	/*wordboard[j][i].setString("s");
		//	i--;*/

		//	std::cout << "key pressed" << std:: endl;
		//	

		//}

			/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
			{

				wordboard[j][i].setString("s");
				i--;

			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::BackSpace))
			{

			}


			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			{

				j++;

			}*/












		window.clear(); // CLEAN Board

		// REDRAW BOXES
		for (int j = 0; j < 5; j++) {
			for (int i = 0; i < 6; i++) {

				window.draw(gameboard[i][j]);


			}
		}

		// REDRAW LETTERS
		for (int j = 0; j < 5; j++) {
			for (int i = 0; i < 6; i++) {

				window.draw(wordboard[i][j]);


			}
		}
		/*window.draw(words);*/
		window.display();
	}

	return 0;
}