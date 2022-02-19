// Assignment 1 - Rock Paper Scissors Game - Intro to Programming GAME1001

/*
Instructions:

Implement a C++ console application that simulates rock-paper-scissors against the computer.

Your application should do the following:
1. Greet the player with a welcome message when the application starts.

2. Ask the player to enter a username.

	2a. Open a text file using the username (i.e. username.txt).
		I. If this file exists, read the game statistics from the previous session into
		your application.
		II. If the file does not exist, create a new text file using the username.

3. The computer should randomly select one of the three options (rock, paper or scissors)
WITHOUT REVEALING their selection.

4. Ask the player to select one of the three possible options.
	a. Map possibilities to logical options. For example rock = 1, paper = 2, scissors = 3.
	b. DO NOT ask the user to type out the entire word.
	c. Display to the user all valid key options.

5. Determine whether the player has won

6. Display a message to the player telling them whether they have won OR lost along with
updated game statistics.

7. Keep track of the game statistics including:
	a. Number of wins by the player
	b. Number of wins by the computer

8. Ask the user if they want to play again.
	a. If yes, repeat steps 3-8
	b. If no, continue to step 9

9. Using the player's username, save the game's statistics to a text file with the same name
as the username (i.e. username.txt).
	a. NOTE: The way you format the saved file is up to you so long as you properly
	save wins by the player and wins by the computer.

10. Provide a confirmation message to the player.

11. End the game.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	// Declaring variables
	int round = 0;
	int pcScore = 0;
	int userScore = 0;
	char userChoice;
	char computerChoice;
	char restartChoice;
	string username;
	string scoreStats;
	ofstream rockPaperScissorsFile;

	cout << "Welcome to my Rock, Paper, Scissors game!\nTo begin, please enter your username below:\n";
	cin >> username;

	cout << "Welcome " << username << "!\n";
	rockPaperScissorsFile.open(username + ".txt", ios_base::app); /* 
																  The use of "ios_base::app" was something I learned via Google, 
																  with teaching from close friends of mine who are very proficient in C++.
																  I don't recall if we learned it in class,
																  but it appends the game's stats so you can look back on your previous game sessions.
																  */ 
	
	rockPaperScissorsFile << "--- New playthrough started! ---\n"; // This outputs to the .txt file so a user can track the stats of each time they launch the program.

	do {
		cout << "\nTime to start playing!\n";
		cout << "Enter 'R' for rock\nEnter 'P' for paper\nEnter 'S' for scissors\n";
		cin >> userChoice;

		srand(time(NULL));			// This section of the code randomizes the computer's move
		int num = rand() % 3 + 1;
		if (num == 1)
		{
			computerChoice = 'R';
		}
		if (num == 2)
		{
			computerChoice = 'P';
		}
		if (num == 3)
		{
			computerChoice = 'S'; 
		}

		if (userChoice == 'R' && computerChoice == 'S') // Computer plays scissors, User plays rock - USER WINS
		{
			cout << "You played rock, computer played scissors!\n";
			cout << "Rock smashes scissors!\n" << username << " wins!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << username << " played rock, computer played scissors! " << username << " wins!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << ++userScore << endl;
			rockPaperScissorsFile << "Computer " << pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (userChoice == 'P' && computerChoice == 'R') // Computer plays rock, User plays paper - USER WINS
		{
			cout << "You played paper, computer played rock!\n";
			cout << "Paper wraps rock!\n" << username << " wins!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << username << " played paper, computer played rock! " << username << " wins!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << ++userScore << endl;
			rockPaperScissorsFile << "Computer " << pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (userChoice == 'S' && computerChoice == 'P') // Computer plays paper, User plays scissors - USER WINS
		{
			cout << "You played scissors, computer played paper!\n";
			cout << "Scissors cuts paper!\n" << username << " wins!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << username << " played scissors, computer played paper! " << username << " wins!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << ++userScore << endl;
			rockPaperScissorsFile << "Computer " << pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (computerChoice == 'R' && userChoice == 'S') // Computer plays rock, User plays scissors - USER LOSS
		{
			cout << "You played scissors, computer played rock!\n";
			cout << "Rock smashes scissors!\n";
			cout << username << " loses!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << "Computer played rock, " << username << " played scissors! " << username << " loses!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << userScore << endl;
			rockPaperScissorsFile << "Computer " << ++pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (computerChoice == 'P' && userChoice == 'R') // Computer plays paper, User plays rock - USER LOSS
		{
			cout << "You played rock, computer played paper!\n";
			cout << "Paper wraps rock!\n";
			cout << username << " loses!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << "Computer played paper, " << username << " played rock! " << username << " loses!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << userScore << endl;
			rockPaperScissorsFile << "Computer " << ++pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (computerChoice == 'S' && userChoice == 'P') // Computer plays scissors, User plays paper - USER LOSS
		{
			cout << "You played paper, computer played scissors!\n";
			cout << "Scissors cuts paper!\n";
			cout << username << " loses!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << "Computer played scissors, " << username << " played paper! " << username << " loses!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << userScore << endl;
			rockPaperScissorsFile << "Computer " << ++pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (computerChoice == 'R' && userChoice == 'R') // Computer plays rock, User plays rock - USER TIES
		{
			cout << "You played rock, but the computer did as well!\n";
			cout << "It's a tie!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << username << " played rock, computer played rock! It's a tie!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << userScore << endl;
			rockPaperScissorsFile << "Computer " << pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (computerChoice == 'P' && userChoice == 'P') // Computer plays paper, User playes paper - USER TIES
		{
			cout << "You played paper, but the computer did as well!\n";
			cout << "It's a tie!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << username << " played paper, computer played paper! It's a tie!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << userScore << endl;
			rockPaperScissorsFile << "Computer " << pcScore << endl;
			rockPaperScissorsFile << endl;
		}
		else if (computerChoice == 'S' && userChoice == 'S') // Computer plays scissors, User plays scissors - USER TIES
		{
			cout << "You played scissors, but the computer did as well!\n";
			cout << "It's a tie!\n";
			rockPaperScissorsFile << "Round " << ++round << ":" << endl;
			rockPaperScissorsFile << username << " played scissors, computer played scissors! It's a tie!\n";
			rockPaperScissorsFile << "The score is: \n";
			rockPaperScissorsFile << username << " " << userScore << endl;
			rockPaperScissorsFile << "Computer " << pcScore << endl;
			rockPaperScissorsFile << endl;
		}

		//Prompts the user to restart the game with a Y/N input, as well as checking for an invalid input..
		cout << "Good game! Your gameplay stats have been saved to the file " << username << ".txt\n" << "If you would like to play another round, please enter 'Y' If not, enter 'N'\n";
		cin >> restartChoice;
		while (restartChoice != 'Y' && restartChoice != 'N')
		{
			cout << "Incorrect input! Please enter Y or N to play again.\n";
			cin >> restartChoice;
		}

	} while (restartChoice == 'Y');

rockPaperScissorsFile.close(); // Close the file at the end as usual
return 0; // As always, return 0.
}
// That's it!