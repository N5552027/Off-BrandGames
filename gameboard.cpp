/*

Notes for Noah:
	- Convert to a class gameboard to allow the game to edit the functions and stuff

*/



//must change to release mode and copy files from debug to release
#include <SFML/Graphics.hpp>

#include "Ball.hpp"
#include "Paddle.hpp"
int main()
{

	int i = 4;
	int j = 0;
	sf::Font font;

	font.loadFromFile("arial.ttf");

	/*sf::Text words;
	words.setFont(font);
	words.setString("test");
	words.setCharacterSize(100);
	words.setFillColor(sf::Color::White);*/

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

	int keyCounter = 0;



	while (window.isOpen()) // openwindow
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			else if (event.type == sf::Event::KeyReleased) {

				if (j > 6) {
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

				j++;
				i = 4;

			}


			else if (i < 0) {

			}
			
			
				else if (event.key.code == sf::Keyboard::A) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("A");

					i--;


				}
				else if (event.key.code == sf::Keyboard::B) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("B");

					i--;


				}
				else if (event.key.code == sf::Keyboard::C) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("C");

					i--;


				}
				else if (event.key.code == sf::Keyboard::D) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("D");

					i--;


				}
				else if (event.key.code == sf::Keyboard::E) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("E");

					i--;


				}
				else if (event.key.code == sf::Keyboard::F) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("F");

					i--;


				}
				else if (event.key.code == sf::Keyboard::G) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("G");

					i--;


				}
				else if (event.key.code == sf::Keyboard::H) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("H");

					i--;


				}
				else if (event.key.code == sf::Keyboard::I) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("I");

					i--;


				}
				else if (event.key.code == sf::Keyboard::J) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("J");

					i--;


				}
				else if (event.key.code == sf::Keyboard::K) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("K");

					i--;


				}
				else if (event.key.code == sf::Keyboard::L) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("L");

					i--;


				}
				else if (event.key.code == sf::Keyboard::M) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("M");

					i--;


				}
				else if (event.key.code == sf::Keyboard::N) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("N");

					i--;


				}
				else if (event.key.code == sf::Keyboard::O) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("O");

					i--;


				}
				else if (event.key.code == sf::Keyboard::P) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("P");

					i--;


				}
				else if (event.key.code == sf::Keyboard::Q){

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("Q");


					i--;


					}
				else if (event.key.code == sf::Keyboard::R) {

						/*std::cout << "key pressed" << std::endl;*/

						wordboard[j][i].setString("R");

					i--;


					}
				else if (event.key.code == sf::Keyboard::S) {

						/*std::cout << "key pressed" << std::endl;*/

							wordboard[j][i].setString("S");

								i--;


								}
				else if (event.key.code == sf::Keyboard::T) {

													/*std::cout << "key pressed" << std::endl;*/

								wordboard[j][i].setString("T");

									i--;


									}
				else if (event.key.code == sf::Keyboard::U) {

							/*std::cout << "key pressed" << std::endl;*/

							wordboard[j][i].setString("U");

								i--;


										}
				else if (event.key.code == sf::Keyboard::V) {

								/*std::cout << "key pressed" << std::endl;*/

								wordboard[j][i].setString("V");

									i--;


								}
				else if (event.key.code == sf::Keyboard::W) {

								/*std::cout << "key pressed" << std::endl;*/

								wordboard[j][i].setString("W");

									i--;


									}
				else if (event.key.code == sf::Keyboard::X) {

							/*std::cout << "key pressed" << std::endl;*/

							wordboard[j][i].setString("X");

									i--;


									}
				else if (event.key.code == sf::Keyboard::Y) {

								/*std::cout << "key pressed" << std::endl;*/

									wordboard[j][i].setString("Y");

											i--;


											}
				else if (event.key.code == sf::Keyboard::Z) {

									/*std::cout << "key pressed" << std::endl;*/

									wordboard[j][i].setString("Z");

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
