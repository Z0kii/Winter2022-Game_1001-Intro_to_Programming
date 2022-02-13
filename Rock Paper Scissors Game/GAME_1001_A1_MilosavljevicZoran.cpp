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
	string username;
	ofstream rockPaperScissorsFile;
		
	cout << "Welcome to my Rock, Paper, Scissors game. To begin, please enter your username below:";
	cin >> username;

	rockPaperScissorsFile.open(username + ".txt");




	return 0;

}