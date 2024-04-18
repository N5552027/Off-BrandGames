void tempGuessValidifierCode(std::string playerGuess, std::string secretWord) 
{
	for (std::string::iterator playerGuessIterator = playerGuess.begin, int guessLetterIndex = 0; playerGuessIterator != playerGuess.end; playerGuessIterator++, guessLetterIndex++) { // TRAVERSE THE PLAYER GUESS
		for (std::string::iterator secretWordIterator = secretWord.begin, int secretLetterIndex = 0; secretWordIterator != secretWord.end; secretWordIterator++, guessLetterIndex++) { // TRAVERSE THE MYSTERY WORD
			
			if (*playerGuessIterator == *secretWordIterator) // LETTER FOUND
			{ 
				if (guessLetterIndex == secretLetterIndex) {  // INDEX MATCH (CHANGE TO GREEN)
					std::cout << "The letter " << *playerGuessIterator << " is at index " << guessLetterIndex << std::endl
						<< "The Mystery Word also has the letter" << *secretWordIterator << "at index " << secretLetterIndex << std::endl
						<< "It's a match!" << std::endl;
				}
				else {	// INDEXES DON'T MATCH (CHANGE TO YELLOW)
					std::cout << "The letter" << *playerGuessIterator << "is at index " << guessLetterIndex << std::endl
						<< "The mystery Word also has the letter" << *secretWordIterator << "at index" << secretLetterIndex << std::endl
						<< "It's not a match but at least the letter is there!" << std::endl;
				}
			}
			else // LETTER IS NOT FOUND: CHANGE TILE TO GRAY
			{
			
				std::cout << "THe letter" << *playerGuessIterator << "ist at index " << guessLetterIndex << std::endl
					<< "The mystery word does not contain the letter" << *playerGuessIterator << "in any index." << std::endl
					<< "It's not in the word!" << std::endl;
			}
		
		}	
	}
}
