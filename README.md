Rock-Paper-Scissors Game
Overview
This project is an implementation of the classic "Rock-Paper-Scissors" game written in
C++. It allows users to play against the computer in multiple rounds, tracking results and
determining the final winner. The project demonstrates various programming concepts
and serves as an excellent example for beginners in programming.
Features
Easy-to-use text-based user interface
Configurable number of rounds (from 1 to 100)
Random computer choice generation
Tracking of individual round results and overall statistics
Screen color changes based on round outcomes
Replay option after completing rounds
Requirements
C++ compiler (such as GCC or Visual C++)
Operating system supporting the used system commands (like system("cls") and
system("color") )
Installation and Running
Download or clone the repository:
git clone https://github.com/yourusername/rock-paper-scissors.git
Navigate to the project folder:
cd rock-paper-scissors
Compile the code:
Using GCC: g++ -o game main.cpp
•
•
•
•
•
•
•
•
1.
1.
1.
2.
Using Visual C++: cl /EHsc main.cpp
Run the game:
On Linux/macOS: ./game
On Windows: game.exe
How to Play
When the game starts, you'll be asked to enter the number of rounds you want to
play (from 1 to 100).
In each round, you'll be prompted to choose one of the following options:
1 for Stone (Rock)
2 for Paper
3 for Scissors
The computer will randomly select its move.
The round result will be displayed and the screen color will change according to
the outcome:
Green if you win
Red if the computer wins
Yellow in case of a draw
After all rounds are completed, the final results will be displayed and the overall
winner determined.
You'll be asked if you want to play again.
Project Structure
Enumerations (Enums)
enum enGameOption { Stone = 1, Paper = 2, Scissor = 3 };
enum enGameParticipants { Player = 1, Computer = 2, Draw = 3 };
3.
4.
5.
6.
1.
2.
3.
4.
5.
6.
7.
8.
9.
10.
11.
12.
Structures (Structs)
struct stRounds {
enGameOption PlayerChoice;
enGameOption ComputerChoice;
enGameParticipants RoundWinner;
};
struct strGameInfo {
int RoundTimes = 0;
int Player1WonTimes = 0;
int ComputerWonTimes = 0;
int DrawTimes = 0;
enGameParticipants FinalWinner;
stRounds Round[100];
};
Key Functions
RandomNumber(int From, int To) : Generate a random number within a specified
range
ReadNumberRange(int From, int To, string Message) : Read and validate user
input
ComputerChoice() : Generate a random choice for the computer
PlayerChoice() : Read the player's choice
CheckRoundWinner(strGameInfo& GameInfo, int RoundNumber) : Determine the
winner of each round
CheckFinalWinner(strGameInfo& GameInfo) : Determine the final winner
StartRound(strGameInfo& GameInfo, int RoundNumber) : Run a single round
StartRoundsAsPerUserRequest(short RoundNumber) : Run multiple rounds as
requested by the user
StartGame() : Start the game and manage the game loop and replay
Programming Concepts Applied
This project applies numerous fundamental programming concepts:
1. Generating Random Numbers
Using rand() to generate computer choices
•
•
•
•
•
•
•
•
•
2. Handling User Input
Reading and validating user choices
3. Working with Enums
Using enum types to represent game choices and winners
4. Conditional Logic
Implementing decision-making using if and switch-case
5. Using Structures
Storing structured game data
6. String Manipulation
Converting enum values to readable strings
7. Looping
Using for and while loops to iterate through rounds
8. Creating Functions
Writing reusable functions for various tasks
9. Generating Computer Choices
Simulating simple AI behavior
10. Comparing Values
Determining winners based on game rules
11. Game Loop & Replay Feature
Allowing multiple rounds of play
12. Clearing the Screen
Using system calls to enhance user experience
13. Tracking Scores
Storing and displaying game statistics
14. Working with Boolean Logic
Comparing values to determine game continuation
15. Reading and Returning Values from Functions
Using return values
16. Switch-Case for Decision Making
Implementing structured approach to game logic
17. Using srand(time(NULL))
Ensuring different results in each game
18. Handling Edge Cases
Validating user input to prevent invalid choices
19. Implementing a Simple AI
Generating non-human opponent decisions
20. Debugging & Output Formatting
Printing structured results with clear formatting
Game R


 **`Full example of output`**

```
Enter how many rounds you want?
Your Choice: 3

          === ROUND 1/3 ===
Your Choice : [1] Stone, [2] Paper, [3] Scissors? 2

[PLAYER]  Choice: Paper
[COMPUTER] Choice: Stone
[ROUND WINNER] Player

          === ROUND 2/3 ===
Your Choice : [1] Stone, [2] Paper, [3] Scissors? 1

[PLAYER]  Choice: Stone
[COMPUTER] Choice: Scissors
[ROUND WINNER] Player

          === ROUND 3/3 ===
Your Choice : [1] Stone, [2] Paper, [3] Scissors? 3

[PLAYER]  Choice: Scissors
[COMPUTER] Choice: Scissors
[ROUND WINNER] No Winner (Draw)

          === FINAL RESULTS ===
____________________________________________________________
                   +++ GAME OVER +++
____________________________________________________________

Total Rounds Played: 3
Player Wins:    2
Computer Wins:  0
Draws:          1
Final Winner:   Player

Would you like to play again? (Y/N)? n
