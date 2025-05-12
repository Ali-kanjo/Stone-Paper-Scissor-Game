## Rock Paper Scissors Game Functions Explanation (C++)

Below is a brief explanation of each function present in the C++ code file you provided:

1.  **`int ReadNumberRange(int From, int To, string Message)`**:
    *   **Function**: This function reads a number input by the user. It ensures that the entered number falls within a specific range (between `From` and `To`). If the user enters a number outside this range, the function prompts for re-entry until a valid number is provided. The function displays a `Message` to guide the user.

2.  **`int RandomNumber(int From, int To)`**:
    *   **Function**: This function generates and returns a random integer within a specified range (between `From` and `To`, inclusive).

3.  **`string Tabs(unsigned short NumOfTabs)`**:
    *   **Function**: This function creates and returns a string containing a specified number (`NumOfTabs`) of tab characters (`\t`). This is typically used for formatting output on the screen.

4.  **`enGameOption ComputerChoice()`**:
    *   **Function**: This function randomly determines the computer's choice (Stone, Paper, or Scissors) in the game. It returns a value of type `enGameOption`.

5.  **`enGameOption UserChoice()`**:
    *   **Function**: This function prompts the user to enter their choice (Stone, Paper, or Scissors) by displaying the available options. It returns a value of type `enGameOption` representing the user's choice.

6.  **`string ConvertOptionFromEnumToText(enGameOption Option)`**:
    *   **Function**: This function converts an `enGameOption` enum value (representing Stone, Paper, or Scissors) into its corresponding string representation (e.g., "Stone", "Paper", "Scissor").

7.  **`enGameParticipants CheckRoundWinner(enGameOption UserChoice, enGameOption ComputerChoice)`**:
    *   **Function**: This function determines the winner of a single round of Rock Paper Scissors based on the `UserChoice` and `ComputerChoice`. It returns a value of type `enGameParticipants` (representing Player, Computer, or Draw).

8.  **`enGameParticipants CheckFinalWinner(strGameResults GameResults)`**:
    *   **Function**: This function determines the overall winner of the game based on the total wins for the player and the computer, which are stored in the `GameResults` struct.

9.  **`string CalculateFinalResult(strGameResults& GameResults, enGameParticipants RoundWinner)`**:
    *   **Function**: This function updates the game results stored in the `GameResults` struct (such as player wins, computer wins, draw counts, and total rounds) based on the `RoundWinner`. It also returns the name of the round winner as a string.

10. **`string GetTheWinner(enGameParticipants RoundWinner)`**:
    *   **Function**: This function returns the name of the round winner ("Player", "Computer", or "No Winner (Draw)") as a string, based on the `RoundWinner` value.

11. **`void GetTheScreenColor(enGameParticipants Winner)`**:
    *   **Function**: This function changes the background color of the console screen based on the round's winner. For example, it might turn green if the player wins, red if the computer wins, and yellow for a draw. It also plays a sound if the computer wins.

12. **`void ShowGameOverInScreen()`**:
    *   **Function**: This function displays a formatted "+++ G a m e O v e r +++" message on the screen to indicate the end of the game.

13. **`enGameParticipants PrintGameResults(strGameResults GameResults)`**:
    *   **Function**: This function prints the final game results to the screen. This includes the total rounds played, player wins, computer wins, draw counts, and the final winner of the game. It also returns the final winner.

14. **`enGameParticipants StartRound()`**:
    *   **Function**: This function starts a new round of the game. It gets the user's choice and the computer's choice, determines the round winner, and displays the round results (each player's choice and the winner). It returns the round winner.

15. **`void StartRoundsAsPerUserRequest(short RoundNumber)`**:
    *   **Function**: This function executes a specified number of game rounds (`RoundNumber`) as requested by the user. In each round, it calls `StartRound()` and updates the overall game results. After all rounds are completed, it displays the final game results.

16. **`void ResetScreen()`**:
    *   **Function**: This function clears the console screen content and resets its color to the default (usually black and white).

17. **`void StartGame()`**:
    *   **Function**: This is the main function that manages the entire game flow. It starts by asking the user how many rounds they want to play. It then manages the execution of these rounds. Finally, it asks the user if they want to play again. The game continues as long as the user answers 'Y' or 'y'.

18. **`int main()`**:
    *   **Function**: This is the entry point for any C++ program. In this program, the `main` function only calls the `StartGame()` function to begin the game.

Additionally, there are some initial definitions:
*   **`enum enGameOption { Stone = 1, Paper = 2, Scissor = 3 };`**: This enumeration defines the possible choices in the game (Stone, Paper, Scissor) and assigns a numerical value to each.
*   **`enum enGameParticipants { Player = 1, Coumputer = 2, Draw = 3 };`**: This enumeration defines the possible participants or round outcomes (Player, Computer, Draw) and assigns a numerical value to each.
*   **`struct strGameResults`**: This structure is defined to store the game results, such as the number of rounds, player wins, computer wins, and draw counts.

 **`Full example of output`**

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
