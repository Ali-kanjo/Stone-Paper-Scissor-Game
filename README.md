# Rock-Paper-Scissors Game

## Overview

This project is an implementation of the classic "Rock-Paper-Scissors" game written in C++. It allows users to play against the computer in multiple rounds, tracking results and determining the final winner. The project demonstrates various programming concepts and serves as an excellent example for beginners in programming.

## Features

- Easy-to-use text-based user interface
- Configurable number of rounds (from 1 to 100)
- Random computer choice generation
- Tracking of individual round results and overall statistics
- Screen color changes based on round outcomes
- Replay option after completing rounds

## Requirements

- C++ compiler (such as GCC or Visual C++)
- Operating system supporting the used system commands (like `system("cls")` and `system("color")`)

## Installation and Running

1. Download or clone the repository:
```bash
git clone https://github.com/yourusername/rock-paper-scissors.git



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
