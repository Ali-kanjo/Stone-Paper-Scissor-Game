#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

enum enGameOption { Stone = 1, Paper = 2, Scissor = 3 };
enum enGameParticipants { Player = 1, Coumputer = 2, Draw = 3 };

struct strGameResults {

	int RoundTimes = 0;
	int Player1WonTimes = 0;
	int ComputerWonTimes = 0;
	int DrawTimes = 0;

};

int ReadNumberRange(int From, int To, string Message) {
	int Number = 0;

	do {
		cout << Message;
		cin >> Number;

		if (Number<From || Number>To) 
			cout << "Enter the number between " << From << " and " << To << endl;

	} while (Number < From || Number > To);

	return Number;
}

int RandomNumber(int From, int To) {

	int RandNum = rand() % (To - From + 1) + From;

	return RandNum;
}

string Tabs(unsigned short NumOfTabs) {

	string Tabs = "";

	for (int i = 0; i < NumOfTabs; i++) {

		Tabs = Tabs + "\t";
	}

	return Tabs;
}

enGameOption ComputerChoice() {

	return (enGameOption)RandomNumber(1, 3);
}

enGameOption UserChoice() {

	return (enGameOption)ReadNumberRange(1, 3, "\nYour Choice : [1] Stone, [2]Paper, [3]Scissors ? ");

}

string ConvertOptionFromEnumToText(enGameOption Option) {

	switch (Option) {

	case enGameOption::Paper:
		return "Paper";

	case enGameOption::Scissor:
		return "Scissor";

	case enGameOption::Stone:
		return "Stone";
	}
}

enGameParticipants CheckRoundWinner(enGameOption UserChoice, enGameOption ComputerChoice) {

	if (UserChoice == ComputerChoice)
		return enGameParticipants::Draw;


	switch (ComputerChoice) {

	case  enGameOption::Stone:

		if (UserChoice == enGameOption::Scissor)

			return enGameParticipants::Coumputer;
		break;


	case enGameOption::Paper:

		if (UserChoice == enGameOption::Stone)

			return enGameParticipants::Coumputer;
		break;


	case enGameOption::Scissor:

		if (UserChoice == enGameOption::Paper)

			return enGameParticipants::Coumputer;
		break;

	}

	return enGameParticipants::Player;

}

enGameParticipants CheckFinalWinner(strGameResults GameResults) {

	if (GameResults.ComputerWonTimes == GameResults.Player1WonTimes)

		return enGameParticipants::Draw;


	else if (GameResults.ComputerWonTimes > GameResults.Player1WonTimes)

		return enGameParticipants::Coumputer;


	else

		return enGameParticipants::Player;

}

string CalculateFinalResult(strGameResults& GameResults, enGameParticipants RoundWinner) {

	switch (RoundWinner) {


	case enGameParticipants::Draw:

		GameResults.DrawTimes++;
		GameResults.RoundTimes++;

		return "No Winner";


	case enGameParticipants::Coumputer:

		GameResults.ComputerWonTimes++;
		GameResults.RoundTimes++;

		return "Computer";


	case enGameParticipants::Player:

		GameResults.Player1WonTimes++;
		GameResults.RoundTimes++;

		return "Player";

	}
}

string GetTheWinner(enGameParticipants RoundWinner) {

	string ArrWinnerName[3] = { "Player","Computer","No Winner (Draw)" };

	return ArrWinnerName[RoundWinner - 1];

}

void GetTheScreenColor(enGameParticipants Winner) {

	switch (Winner) {

	case enGameParticipants::Coumputer:
		cout << "\a";
		system("color 4F");
		break;


	case enGameParticipants::Draw:
		system("color 6F");
		break;


	case enGameParticipants::Player:
		system("color 2F");
		break;


	}
}

void ShowGameOverInScreen() {

	cout << Tabs(3) << "____________________________________________________________\n\n";
	cout << Tabs(5) << "+++ G a m e  O v e r +++\n";
	cout << Tabs(3) << "____________________________________________________________\n\n";

}

enGameParticipants PrintGameResults(strGameResults GameResults) {

	enGameParticipants FinalWinner = CheckFinalWinner(GameResults);

	ShowGameOverInScreen();

	cout <<Tabs(3) << "_______________________[ Game Results ]_______________________\n\n";

	cout  << Tabs(3) << "Game Round         : " << GameResults.RoundTimes << endl;
	cout  << Tabs(3) << "Player1 won times  : " << GameResults.Player1WonTimes << endl;
	cout  << Tabs(3) << "Computer won times : " << GameResults.ComputerWonTimes << endl;
	cout  << Tabs(3) << "Draw times         : " << GameResults.DrawTimes << endl;
	cout  << Tabs(3) << "Final Winner       : " << GetTheWinner(FinalWinner) << endl;
	cout  << Tabs(3) << "____________________________________________________________\n";

	return FinalWinner;

}

enGameParticipants StartRound() {

	enGameOption UserOption, ComputerOption;
	enGameParticipants RoundWinner;

	UserOption = UserChoice();
	ComputerOption = ComputerChoice();
	RoundWinner = CheckRoundWinner(UserOption, ComputerOption);

	cout << "Player1  Choice: " << ConvertOptionFromEnumToText(UserOption) << endl;
	cout << "Computer Choice: " << ConvertOptionFromEnumToText(ComputerOption) << endl;
	cout << "Round Winner   : [" << GetTheWinner(RoundWinner) << "]\n";

	GetTheScreenColor(RoundWinner);
	
	return RoundWinner;
}

void StartRoundsAsPerUserRequest(short RoundNumber) {
	strGameResults GameResults;

	for (int RoundCount = 1; RoundCount <= RoundNumber; RoundCount++) {

		cout << "\nRound[" << RoundCount << "] begins : \n";
		cout << "\n____________________________Round[" << RoundCount << "]____________________________\n\n";

		CalculateFinalResult(GameResults,StartRound());

		cout << "\n________________________________________________________\n";

	}
	GetTheScreenColor(PrintGameResults(GameResults));

}

void ResetScreen() {

	system("cls");
	system("color 0F");
}

void StartGame() {

	char Answer = 'Y';
	int NumOfRound = 0;

	srand((unsigned)time(NULL));

	do {

		ResetScreen();
		NumOfRound = ReadNumberRange(1, 10, "Enter how many round you want ?\n");

		StartRoundsAsPerUserRequest(NumOfRound);

		cout << Tabs(3) << "Do you want to play again ?(Y/N)?";
		cin >> Answer;

	} while (Answer == 'Y' || Answer == 'y');

}

int main() {

	StartGame();

	return 0;

}
