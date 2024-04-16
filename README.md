# Off-BrandGames
What's your's is mine. PA9 project


PROJECT EXPRESSION ESCAPADE
WORDLE feat. 200 of our favorite 4-5-6 words
    By: Reuben, Max Upton, Finn, and Noah Manuel

IDEAS:
Player Tracking:
  - fastest solve time && word
  - longest winning/losing streak

Multiple Rounds

Round Types:
- 4 Letters, 5 letters, and 6 letter words
- time mode
- no-time mode

6 rows total regardless of letter count per word

Minimum to Implement (Agreed on 4-16):
    - PA9 application requirements

BASIC LEVEL:
    - GRAPHICAL DESIGN
    - USER INPUT
    - MENU DESIGN
        - ALLOW US TO WORK ON MULTIPLE LETTERS
    - AT MINIMUM IMPLEMENT FIVE LETTER MODE
        - Possible inheritence to different modes


IF THERE'S TIME (LEAST TO MOST IMPORTANT):
    - IMPLEMENT DICTIONARY TO TRACK IF USERINPUT IS A VALID DICTIONARY WORD
    - PLAYER STATS (TIME TO SOLVE, STREAKS, ETC.)
    - TIMED MODE

MEETING 1 (4-15):
   How to score guesses:
      two for-loops inside of each other
         outside traxks the user's guess
         inside traxks the mystery word

   Loading Files:
       three individual .txt files for each word type (word length)
            load them into individual vectors
        three seperate vectors to hold each word type
            
MEETING 2 (4-16):
    Prioritizing Graphic Design first before going over code
        Code is straightforward to implement
    
    Graphic design:
        - DARK GRAY (unused letter)
        - Gray (letter not present in mystery word)
        - Yellow (Letter present, not right location)
        - Green (Letter present, correct location)
    
    Needed Functions per gamemode:
        // Generate board
        // Choose Mystery Word
        // Get Player Guess
        // CompareGuessToMysteryWord
        // UPDATE BOARD
        // DISPLAY STATS (AT A LATER MOMENT IN TIME)
    
    Jobs Finalization:
        Reuben: Function Definer
        Finn: Gamemode Creator
        Noah: Function Definer
        Max: Graphic Design
    
    Possible LIBRARIES:
        chrono: PLAYER STATS TRACKING
            https://stackoverflow.com/questions/1735307/c-keeping-track-of-how-many-seconds-has-passed-since-start-of-program
        fstream: LOAD MYSTERY WORD FILES
        iostream: bc duh
        vector: MYSTERY WORD BANK
        SFML libraries: bc duh
        
        
MEETING 3 (4-18):
    
