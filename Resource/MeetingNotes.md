# Off-BrandGames
What's your's is mine. PA9 project

PROJECT WORDCRAFT
INTERNAL NAME: LEXI-GUESSY

AKA:
WORDLE feat. 200 of our favorite 4-5-6 words
    By: Reuben Hoffer, Max Upton, Finley Blaylock, and Noah Manuel (ALL LAB SECTION 11)

IDEAS:
Player Tracking:
  - fastest solve time && word
  - longest winning/losing streak

Multiple Rounds?

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
        - DARK GRAY (unsubmitted letter)
        - Gray (letter not present in mystery word)
        - Yellow (Letter present, not right location)
        - Green (Letter present, correct location)  
    Needed Functions per gamemode:
        // Generate board
        // Choose Mystery Word
        // Get Player Guess (UPDATED BOARD WITH PLAYER GUESS)
        // CompareGuessToMysteryWord (UPDATED BOARD WITH COMPARIOSON)
        // DISPLAY STATS (AT A LATER MOMENT IN TIME)
    Jobs Finalization:
        Reuben: Function Definer
        Finn: Gamemode Creator
        Noah: Function Definer
        Max: Graphic Design    
    Possible LIBRARIES:
        fstream: LOAD MYSTERY WORD FILES
        iostream: bc duh
        vector: MYSTERY WORD BANK
        SFML libraries: bc duh
ACHIEVED GOALS:
       We made our word banks
       created scaffolding for the gamemode
       Max is doing his best with graphic design
        GAMEBOARD VECTOR CREATED

AGREED TEST CASES:
       MULTIPLE PRESENCE OF ONE LETTER IN WORDS (e.g. books, facade, eagle, etc.)
       USER INPUT:
              - SHORTER LENGTH THAN EXPECTED
              - LONGER LENGTH THAN EXPECTED
       TEST PLAYER STATS
              - LIVES IN ENDURANCE MODE
              - TIME TO SOLVE TEST CASE
       CORRECT USAGE OF BOXES
              - RIGHT COLOR IS IMPLEMENTED

MEETING 3 (4-18):
Achieved Goals:
    Internal Code:
        - Get player Guess
        - Gamemode classes
        - compare guess to mystery word
        - Console screen Game
    Visual/Graphics Code:
        - Font loading work

MEETING 4 (4-19):
Achieved Goals:
    Internal Code:
        - nearly complete 5LM with print to console screen
    Visual/Graphics Code:
        - Imported fonts finally (Thank you Andy)

Meeting 5 (4-20):
HAPPY DANKSGIVING!!

Achieved Goals:
    Internal Goals:
        - Finalized 3LiveMode
        - Finalized Game mode
    Visual/Graphics Code:
        - Figured out how to clear lines

Meeting 6 (4-22):
Achieved Goals:
    Began process of merging graphics and internal game code together. 


Update Notes: 
    Noah - MERGING GRAPHICS AND INGAME CODE IS HARD AF

MEETING 7 (4-23):
Achieved Goals:
    - Recorded Youtube Video for video
        Link: 
    - Another coding sesh with the boys

ABSOLUTE GOAL: HAVE 5LM ALMOST COMPLETELY FINISHED BY END OF DAY IN ORDER TO START OTHER GAME MODES (4LM 6LM)
ABSOLUTE GOAL: ALL HANDS ON DECK FOR GRAPHICS CODING ON TUESDAY

MEETING 8 (4-24): 
Meeting Goals:
    Last minute coding session with the boys
    Debriefing project
    Submitting project together 

DEMO YOUTUBE VIDEO: https://youtu.be/ptP_fntMdVE?si=hApwDxirAEuL1FvL


#WeLoveReuben
#WeLoveAndy
