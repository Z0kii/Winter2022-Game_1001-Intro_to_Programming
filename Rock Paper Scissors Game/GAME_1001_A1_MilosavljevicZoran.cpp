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
	char userChoice;
	char computerChoice;
	string username;
	ofstream rockPaperScissorsFile;

		
	cout << "Welcome to my Rock, Paper, Scissors game!\nTo begin, please enter your username below:\n";
	cin >> username;

	cout << "Welcome " << username << "!\n";
	cout << "\nTime to start playing!\n";
	cout << "Enter 'R' for rock\nEnter 'P' for paper\nEnter 'S' for scissors\n";
	cin >> userChoice;

	srand(time(NULL));
	int num = rand() % 3 + 1;
	if (num == 1)
	{
		computerChoice = 'R';
	}
	if (num == 2) 
	{
		computerChoice = 'R';
	}
	if (num == 3) 
	{ 
		computerChoice = 'R';
	}
	
	rockPaperScissorsFile.open(username + ".txt");

	if (userChoice == 'R' && computerChoice == 'S')
	{
		cout << "You played rock, computer played scissors!\n";
		cout << "Rock smashes scissors!\n" << username << " wins!\n";
	}
	else if (userChoice == 'P' && computerChoice == 'R')
	{
		cout << "You played paper, computer played rock!\n";
		cout << "Paper wraps rock!\n" << username << " wins!\n";
	}
	else if (userChoice == 'S' && computerChoice == 'P')
	{
		cout << "You played scissors, computer played paper!\n";
		cout << "Scissors cuts paper!\n" << username << " wins!\n";
	}
	else if (computerChoice == 'R' && userChoice == 'S')
	{
		cout << "You played scissors, computer played rock!\n";
		cout << "Rock smashes scissors!\n";
		cout << username << " loses!\n";
	}
	else if (computerChoice == 'P' && userChoice == 'R')
	{
		cout << "You played rock, computer played paper!\n";
		cout << "Paper wraps rock!\n";
		cout << username << " loses!\n";
	}
	else if (computerChoice == 'S' && userChoice == 'P')
	{
		cout << "You played paper, computer played scissors!\n";
		cout << "Scissors cuts paper!\n";
		cout << username << " loses!\n";
	}
	else
	{
		cout << "You both played the same move! It's a tie!";
	}
	


	return 0;

}