# Rock-Paper-Scissors Game

## Overview
Implementation of the classic "Rock-Paper-Scissors" game in C++. Allows users to play against the computer in multiple rounds with result tracking.

## Features
- Easy-to-use text-based interface
- Configurable rounds (1-100)
- Random computer choice generation
- Round result tracking and statistics
- Screen color changes based on outcomes
- Replay option after completion

## Requirements
- C++ compiler (GCC/Visual C++)
- OS supporting system commands (`cls`/`color`)

## Installation & Running

cd rock-paper-scissors

# Compilation
g++ -o game main.cpp          # GCC
cl /EHsc main.cpp             # Visual C++

# Execution
./game                        # Linux/macOS
game.exe                      # Windows

**How to Play**

1. When the game starts, you'll be asked to enter the number of rounds you want to play (from 1 to 100).
1. In each round, you'll be prompted to choose one of the following options:

   3. 1 for Stone (Rock)
   3. 2 for Paper
   3. 3 for Scissors
   3. The computer will randomly select its move.
   3. The round result will be displayed and the screen color will change according to the outcome:
   3. Green if you win
   3. Red if the computer wins
1. Yellow in case of a draw
1. After all rounds are completed, the final results will be displayed and the overall winner determined.
1. You'll be asked if you want to play again.

**Project Structure**

**Enumerations (Enums)**

**enum enGameOption** {Stone = 1, Paper = 2, Scissor = 3 };![](Aspose.Words.13dfe2c5-a143-45f7-8bc1-ec929897fae2.003.png)

**enum enGameParticipants** {Player = 1, Computer = 2, Draw = 3 };

**Structures (Structs)**

**struct stRounds** {![](Aspose.Words.13dfe2c5-a143-45f7-8bc1-ec929897fae2.004.png)

enGameOption PlayerChoice; enGameOption ComputerChoice; enGameParticipants RoundWinner;

};

**struct strGameInfo** {

int RoundTimes = 0;

int Player1WonTimes = 0;

int ComputerWonTimes = 0;

int DrawTimes = 0; enGameParticipants FinalWinner; stRounds Round[100];

};

**Key Functions**

- RandomNumber(int From, int To) : Generate a random number within a specified range
- ReadNumberRange(int From, int To, string Message) : Read and validate user

  input

- ComputerChoice() : Generate a random choice for the computer
- PlayerChoice() : Read the player's choice
- CheckRoundWinner(strGameInfo& GameInfo, int RoundNumber) : Determine the winner of each round
- CheckFinalWinner(strGameInfo& GameInfo) : Determine the final winner
- StartRound(strGameInfo& GameInfo, int RoundNumber) : Run a single round
- StartRoundsAsPerUserRequest(short RoundNumber) : Run multiple rounds as requested by the user
- StartGame() : Start the game and manage the game loop and replay

**Programming Concepts Applied**

This project applies numerous fundamental programming concepts:

1. **Generating Random Numbers**

Using  rand() to generate computer choices

2. **Handling User Input**

Reading and validating user choices

3. **Working with Enums**

Using  enum types to represent game choices and winners

4. **Conditional Logic**

Implementing decision-making using  if and  switch-case

5. **Using Structures**

Storing structured game data

6. **String Manipulation**

Converting enum values to readable strings

7. **Looping**

Using  for and  while loops to iterate through rounds

8. **Creating Functions**

Writing reusable functions for various tasks

9. **Generating Computer Choices**

Simulating simple AI behavior

10. **Comparing Values**

Determining winners based on game rules

11. **Game Loop & Replay Feature**

Allowing multiple rounds of play

12. **Clearing the Screen**

Using system calls to enhance user experience

13. **Tracking Scores**

Storing and displaying game statistics

14. **Working with Boolean Logic**

Comparing values to determine game continuation

15. **Reading and Returning Values from Functions** Using  return values
15. **Switch-Case for Decision Making**

    Implementing structured approach to game logic

17. **Using srand(time(NULL))**

Ensuring different results in each game

18. **Handling Edge Cases**

Validating user input to prevent invalid choices

19. **Implementing a Simple AI**

Generating non-human opponent decisions

20. **Debugging & Output Formatting**

Printing structured results with clear formatting

**Game Rules**

- Rock beats Scissors
- Paper beats Rock
- Scissors beats Paper
- If the player and computer choose the same option, the result is a draw


