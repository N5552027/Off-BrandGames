
//must change to release mode and copy files from debug to release
#include <SFML/Graphics.hpp>


#include "boards.hpp"
#include"game.hpp"
int main()
{

	int i = 0;
	int j = 0;
	sf::Font font;

	font.loadFromFile("arial.ttf");
	

	fiveLetters mode;

	



	sf::RenderWindow home(sf::VideoMode(1000, 1000), "menu");



	while (home.isOpen()) // openwindow
	{
		sf::Event event;
		while (home.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				home.close();

			else if (event.type == sf::Event::KeyReleased) {

				

				if (event.key.code == sf::Keyboard::Enter) {
					 
					home.close();
				}
				else if (event.key.code == sf::Keyboard::Num1) {


					sf::RenderWindow rules(sf::VideoMode(1500, 1500), "Rules");

					while (rules.isOpen()) {

						sf::Event eRules;
						while (rules.pollEvent(eRules)) {

							if (eRules.type == sf::Event::Closed)
								rules.close();

							else if (eRules.type == sf::Event::KeyReleased) {


								if (eRules.key.code == sf::Keyboard::Escape) {

									rules.close();
								}
							}

						}

							sf::Text rulesText(" The main goal of wordle is to input up to six five letter words\n in order to guess the mystery five letter word that has been selected. \n\n When a letter is inputed the box it is in will turn yellow if the letter is in the mystery word but in the wrong spot,\n or green if the letter is both in the mystery word and in the right spot. \n\n Ultimately our game is a lot like wordle with a few minor changes\n\n 1. In our version of wordle we promote freedom by allowing any combination of letters up to 5 to be chosen\n\n 2. Our version of wordle does not include any repeated letters in the mystery words \n\n Press escape to return to menu ",font,30);



							rules.clear();

							
							rules.draw(rulesText);

							rules.display();

					}


				}
			}

			



		}

		sf::Text words("Welcome to our version of Wordle \n \n press 1 for rules \n press enter to start", font, 30);

		home.clear();

		home.draw(words);

		home.display();

	}

	sf::RenderWindow window(sf::VideoMode(1000, 1000), "Wordle!");
	
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

	
	






	while (window.isOpen()) // openwindow
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

					if (i != 0) {
						wordboard[j][i - 1].setString(" ");

						i--;
					}
				}


			else if (event.key.code == sf::Keyboard::Enter) {

				// PLAYER SUBMITS A GUESS
					bool success=false;
					
				success = mode.compareGuessToWord(wordboard[j], gameboard[j], "words");

				if (success == true) {
					int play=2;
				

					
					

					//end screen

					sf::RenderWindow home(sf::VideoMode(1000, 1000), "menu");



					while (home.isOpen()) // openwindow
					{
						sf::Event event;
						while (home.pollEvent(event))
						{
							if (event.type == sf::Event::Closed)
								home.close();

							else if (event.type == sf::Event::KeyReleased) {



								if (event.key.code == sf::Keyboard::Escape) {
									//exit
									home.close();
									window.close();
								}
								else if(event.key.code == sf::Keyboard::Enter)
								{
									//new game
									
									j = -1;
									for (int j = 0; j < 5; j++) {
										for (int i = 0; i < 6; i++) {

											gameboard[i][j].setGrey();


										}
									}

									// REDRAW LETTERS
									for (int j = 0; j < 5; j++) {
										for (int i = 0; i < 6; i++) {

											wordboard[i][j].setString(" ");


										}
									}
									home.close();

								}
							}


						}

						sf::Text endscreen("Congragulations, you guessed the word\n\n Press enter to play again\n\n Press escape to exit", font, 30);
						home.clear();
						home.draw(endscreen);
						home.display();

					}




				}
				else if (j==5) {

					
					sf::RenderWindow home(sf::VideoMode(1000, 1000), "menu");



					while (home.isOpen()) // openwindow
					{
						sf::Event event;
						while (home.pollEvent(event))
						{
							if (event.type == sf::Event::Closed)
								home.close();

							else if (event.type == sf::Event::KeyReleased) {



								if (event.key.code == sf::Keyboard::Escape) {
									//exit
									home.close();
									window.close();
								}
								else if (event.key.code == sf::Keyboard::Enter)
								{
									//new game

									j = -1;
									for (int j = 0; j < 5; j++) {
										for (int i = 0; i < 6; i++) {

											gameboard[i][j].setGrey();


										}
									}

									// REDRAW LETTERS
									for (int j = 0; j < 5; j++) {
										for (int i = 0; i < 6; i++) {

											wordboard[i][j].setString(" ");


										}
									}
									home.close();

								}
							}


						}

						sf::Text endscreen("Unfortunately you were unable to guess the word \n\nPress enter to play again\n\n Press escape to exit", font, 30);
						home.clear();
						home.draw(endscreen);
						home.display();

					}



				}


				j++;
				i = 0;

			}


			else if (i > 4) {

			}
			
			
				else if (event.key.code == sf::Keyboard::A) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("a");

					i++;


				}
				else if (event.key.code == sf::Keyboard::B) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("b");

					i++;


				}
				else if (event.key.code == sf::Keyboard::C) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("c");

					i++;


				}
				else if (event.key.code == sf::Keyboard::D) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("d");

					i++;


				}
				else if (event.key.code == sf::Keyboard::E) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("e");

					i++;


				}
				else if (event.key.code == sf::Keyboard::F) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("f");

					i++;


				}
				else if (event.key.code == sf::Keyboard::G) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("g");

					i++;


				}
				else if (event.key.code == sf::Keyboard::H) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("h");

					i++;


				}
				else if (event.key.code == sf::Keyboard::I) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("i");

					i++;


				}
				else if (event.key.code == sf::Keyboard::J) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("j");

					i++;


				}
				else if (event.key.code == sf::Keyboard::K) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("k");

					i++;


				}
				else if (event.key.code == sf::Keyboard::L) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("l");

					i++;


				}
				else if (event.key.code == sf::Keyboard::M) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("m");

					i++;


				}
				else if (event.key.code == sf::Keyboard::N) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("n");

					i++;


				}
				else if (event.key.code == sf::Keyboard::O) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("o");

					i++;


				}
				else if (event.key.code == sf::Keyboard::P) {

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("p");

					i++;


				}
				else if (event.key.code == sf::Keyboard::Q){

					/*std::cout << "key pressed" << std::endl;*/

					wordboard[j][i].setString("q");


					i++;


					}
				else if (event.key.code == sf::Keyboard::R) {

						/*std::cout << "key pressed" << std::endl;*/

						wordboard[j][i].setString("r");

					i++;


					}
				else if (event.key.code == sf::Keyboard::S) {

						/*std::cout << "key pressed" << std::endl;*/

							wordboard[j][i].setString("s");

								i++;


								}
				else if (event.key.code == sf::Keyboard::T) {

													/*std::cout << "key pressed" << std::endl;*/

								wordboard[j][i].setString("t");

									i++;


									}
				else if (event.key.code == sf::Keyboard::U) {

							/*std::cout << "key pressed" << std::endl;*/

							wordboard[j][i].setString("u");

								i++;


										}
				else if (event.key.code == sf::Keyboard::V) {

								/*std::cout << "key pressed" << std::endl;*/

								wordboard[j][i].setString("v");

									i++;


								}
				else if (event.key.code == sf::Keyboard::W) {

								/*std::cout << "key pressed" << std::endl;*/

								wordboard[j][i].setString("w");

									i++;


									}
				else if (event.key.code == sf::Keyboard::X) {

							/*std::cout << "key pressed" << std::endl;*/

							wordboard[j][i].setString("x");

									i++;


									}
				else if (event.key.code == sf::Keyboard::Y) {

								/*std::cout << "key pressed" << std::endl;*/

									wordboard[j][i].setString("y");

											i++;


											}
				else if (event.key.code == sf::Keyboard::Z) {

									/*std::cout << "key pressed" << std::endl;*/

									wordboard[j][i].setString("z");

											i++;


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
