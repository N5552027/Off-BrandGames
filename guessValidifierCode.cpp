void compareGuess(const std::string& playerGuess) {
	secretGuessValidifierCode(playerGuess, secretWord);
}

void secretGuessValidifierCode(std::string playerGuess, std::string secretWord) 
{
	std::string::iterator playerGuessIterator,
							secretWordIterator;
	int guessLetterIndex,
		secretLetterIndex;

	bool letterPresence = false;

		for (playerGuessIterator = playerGuess.begin(), guessLetterIndex = 0; playerGuessIterator != playerGuess.end(); playerGuessIterator++, guessLetterIndex++) { // TRAVERSE THE PLAYER GUESS\
			
			letterPresence = false;

			for (secretWordIterator = secretWord.begin(), secretLetterIndex = 0; secretWordIterator != secretWord.end(); secretWordIterator++, secretLetterIndex++) { // TRAVERSE THE MYSTERY WORD


				if (*playerGuessIterator == *secretWordIterator) // LETTER FOUND
				{
					letterPresence = true;

					if (guessLetterIndex == secretLetterIndex) {  // INDEX MATCH (CHANGE TO GREEN)
						std::cout << "The letter " << *playerGuessIterator << " is at index " << guessLetterIndex << std::endl
							<< "The Mystery Word also has the letter " << *secretWordIterator << " at index " << secretLetterIndex << std::endl
							<< " It's a match! " << std::endl;
					}
					else {	// INDEXES DON'T MATCH (CHANGE TO YELLOW)
						std::cout << "The letter " << *playerGuessIterator << " is at index " << guessLetterIndex << std::endl
							<< "The mystery Word also has the letter " << *secretWordIterator << " at index " << secretLetterIndex << std::endl
							<< "It's not a match but at least the letter is there!" << std::endl;
					}
				}
				
			}

			if (letterPresence == false) {
				std::cout << "The letter " << *playerGuessIterator << " is at index " << guessLetterIndex << std::endl
					<< "The mystery word does not contain the letter " << *playerGuessIterator << " in any index. " << std::endl
					<< "It's not in the word!" << std::endl;
			}

		
		}
}
