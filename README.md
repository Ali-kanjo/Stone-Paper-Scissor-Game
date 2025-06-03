# Rock-Paper-Scissors Game in C++


## Overview
A C++ implementation of the classic "Rock-Paper-Scissors" game where players compete against the computer. This project demonstrates fundamental programming concepts and serves as an excellent learning resource for C++ beginners.

## Features
- 🎮 Text-based user interface
- ⚙️ Configurable number of rounds (1-100)
- 🎲 Random computer choice generation
- 📊 Round-by-round tracking and statistics
- 🎨 Screen color changes based on outcomes
- 🔁 Replay option after completing rounds

## Requirements
- C++ compiler (GCC or Visual C++)
- Operating system supporting system commands (`system("cls")` and `system("color")`)

## Installation & Running
```bash
# Clone repository
git clone https://github.com/yourusername/rock-paper-scissors.git

# Navigate to project
cd rock-paper-scissors

# Compile with GCC
g++ -o game main.cpp

# Run the game
./game  # Linux/macOS
game.exe  # Windows
```

## How to Play
1. Enter number of rounds (1-100)
2. Each round, choose:
   - `1` for Rock (Stone)
   - `2` for Paper
   - `3` for Scissors
3. Computer makes random selection
4. Results displayed with color-coded feedback:
   - 🟢 Green: Player wins
   - 🔴 Red: Computer wins
   - 🟡 Yellow: Draw
5. View final results and overall winner
6. Choose to replay or exit

## Project Structure
### Enumerations
```cpp
enum enGameOption { Stone = 1, Paper = 2, Scissor = 3 };
enum enGameParticipants { Player = 1, Computer = 2, Draw = 3 };
```

### Structures
```cpp
struct stRounds {
    enGameOption PlayerChoice;
    enGameOption ComputerChoice;
    enGameParticipants Roundwinner;
};

struct strGameInfo {
    int RoundTimes = 0;
    int Player1WonTimes = 0;
    int ComputerWonTimes = 0;
    int DrawTimes = 0;
    enGameParticipants Finalwinner;
    stRounds Round[100];
};
```

### Key Functions
| Function | Description |
|----------|-------------|
| `RandomNumber(int From, int To)` | Generate random number |
| `ReadNumberRange(int From, int To, string Message)` | Validate user input |
| `ComputerChoice()` | Generate computer's move |
| `PlayerChoice()` | Get player's choice |
| `CheckRoundwinner()` | Determine round winner |
| `CheckFinalwinner()` | Determine game winner |
| `StartRound()` | Run single round |
| `StartGame()` | Manage game loop |

## Programming Concepts Applied
- Random number generation (`rand()`)
- User input validation
- Enum implementation
- Conditional logic (`if`/`switch`)
- Structure data storage
- String manipulation
- Loop control (`for`/`while`)
- Function abstraction
- Score tracking
- Game loop management
- Screen clearing commands
- Edge case handling

## Game Rules
- 🪨 Rock beats ✂️ Scissors
- 📄 Paper beats 🪨 Rock
- ✂️ Scissors beats 📄 Paper
- Same choice = Draw
