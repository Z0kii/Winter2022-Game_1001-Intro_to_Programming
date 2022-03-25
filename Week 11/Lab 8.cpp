#include <iostream>
#include <string>
#include "Character.h"
using namespace std;
// Intro to Programming 1001 - Lab 8
/*
Create a  Character class with the following properties:
	Name
	HP
	Attack

Ensure all proper mutators and accessors are created. Create a minimum of 1 constructor for the class. 
Ensure proper separation of .h and .cpp content.

Create a test class (main function) to allow users to create a character.

Allow the user to provide a name for the character.

Supply a default (hard coded) HP value for the Character.

Randomly assign an attack value to the newly created character

Display the character information to the user.
*/

int main()
{
	srand(time(NULL));
	char characterSelection;
	string username;

	Assassin assassinClass;
	cout << "Welcome to the character creator! Currently only one class is available, Assassin.\n";
	cout << "To select the Assassin, please enter 'A'\n";
	cin >> characterSelection;
	while (characterSelection != 'A')
	{
		cout << "Incorrect input! Please enter 'A' to select the Assassin class.\n";
		cin >> characterSelection;
	}
	cout << "Assassin class selected! Please enter your character's name: ";
	cin >> username;
	cout << "\nWelcome " << username << "! Your class's stats are desplayed below:\n";
	cout << "Name: " << username << endl;
	cout << "Health: " << assassinClass.GetHealth() << endl;
	cout << "Attack: " << assassinClass.GetAttack() << endl;

	return 0;
}