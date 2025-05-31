# Rock-Paper-Scissors Game

## Overview
This project is an implementation of the classic "Rock-Paper-Scissors" game written in C++. [cite: 1] It allows users to play against the computer in multiple rounds, tracking results and determining the final winner. [cite: 2] The project demonstrates various programming concepts and serves as an excellent example for beginners in programming. [cite: 3]

## Features
* Easy-to-use text-based user interface [cite: 4]
* Configurable number of rounds (from 1 to 100) [cite: 4]
* Random computer choice generation [cite: 4]
* Tracking of individual round results and overall statistics [cite: 4]
* Screen color changes based on round outcomes [cite: 4]
* Replay option after completing rounds [cite: 4]

## Requirements
* C++ compiler (such as GCC or Visual C++)
* Operating system supporting the used system commands (like `system("cls")` and `system("color")`)

## Installation and Running
1.  Download or clone the repository:
    ```bash
    git clone [https://github.com/yourusername/rock-paper-scissors.git](https://github.com/yourusername/rock-paper-scissors.git)
    ```
2.  Navigate to the project folder:
    ```bash
    cd rock-paper-scissors
    ```
3.  Compile the code:
    * Using GCC: `$g++ -o game main.cpp` [cite: 4]
    * Using Visual C++: `cl /EHsc main.cpp` [cite: 5]
4.  Run the game:
    * On Linux/macOS: `./game`
    * On Windows: `game.exe`

## How to Play
1.  When the game starts, you'll be asked to enter the number of rounds you want to play (from 1 to 100). [cite: 6]
2.  In each round, you'll be prompted to choose one of the following options: [cite: 6]
    * 1 for Stone (Rock) [cite: 6]
    * 2 for Paper [cite: 6]
    * 3 for Scissors [cite: 6]
3.  The computer will randomly select its move. [cite: 7]
4.  The round result will be displayed and the screen color will change according to the outcome: [cite: 7]
    * Green if you win [cite: 7]
    * Red if the computer wins [cite: 7]
    * Yellow in case of a draw [cite: 7]
5.  After all rounds are completed, the final results will be displayed and the overall winner determined. [cite: 8]
6.  You'll be asked if you want to play again. [cite: 9]

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
