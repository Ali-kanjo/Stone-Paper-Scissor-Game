**Rock-Paper-Scissors Game**

**Overview**

This project is an implementation of the classic "Rock-Paper-Scissors" game written in C++. It allows users to play against the computer in multiple rounds, tracking results and determining the final winner. The project demonstrates various programming concepts and serves as an excellent example for beginners in programming.

**Features**

- Easy-to-use text-based user interface
- Configurable number of rounds (from 1 to 100)
- Random computer choice generation
- Tracking of individual round results and overall statistics
- Screen color changes based on round outcomes
- Replay option after completing rounds

**Requirements**

- C++ compiler (such as GCC or Visual C++)
- Operating system supporting the used system commands (like  system("cls") and system("color") )

**Installation and Running**

1\. Download or clone the repository:

git clone https://github.com/yourusername/rock-paper-scissors.git ![](Aspose.Words.13dfe2c5-a143-45f7-8bc1-ec929897fae2.001.png)1. Navigate to the project folder:

cd rock-paper-scissors![](Aspose.Words.13dfe2c5-a143-45f7-8bc1-ec929897fae2.002.png)

1. Compile the code:
1. Using GCC:  g++ -o game main.cpp
3. Using Visual C++:  cl /EHsc main.cpp
3. Run the game:
3. On Linux/macOS:  ./game
3. On Windows:  game.exe

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

**Contributing**

Contributions to improve this project are welcome! If you'd like to contribute, please follow these steps:

1. Fork the repository
1. Create a new branch for your feature ( git checkout -b feature/amazing-feature )
1. Make your changes
1. Commit your changes ( git commit -m 'Add some amazing feature' )
1. Push to the branch ( git push origin feature/amazing-feature )
1. Open a Pull Request

**License**

This project is licensed under the MIT License - see the [LICENSE file for](file:///tmp/LICENSE) details.

**Credits**

- This project was developed as an educational example to demonstrate basic programming concepts in C++.
- Special thanks to all contributors and instructors who helped develop this project.

**Contact**

If you have any questions or suggestions, please open an issue in this repository or contact the main developer via email.![](Aspose.Words.13dfe2c5-a143-45f7-8bc1-ec929897fae2.005.png)

Created by [Your Name] © 2025
