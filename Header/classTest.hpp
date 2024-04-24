#include "Header.hpp"

class testingGrounds {
public:
  void runTestingCases();

private:

/* TEST CASE FUNCTIONS */
  void testLoadWordBank();         // TEST LOADING WORD BANK FUNCTION
  void testRandomWordSelection();  // TEST RANDOM WORD COMPARISON
  void testWordComparison();       // 
  void testColorChange();          //
  void testWordAddition();         //

/* PRIVATE DATA MEMBERS */
  std::ifstream inFileStream;
  std::vector<std::string> wordBank;
  std::string mysteryWord;
};
