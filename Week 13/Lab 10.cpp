#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	const int LENGTH = 100; // This sets the password to a maximum number of characters. In this case, 100.
	char password[LENGTH];	// Stores the characters (type char) into an array - [LENGTH] - i.e. all the characters, or the "LENGTH" of the password.
	int numbers;			// This tracks the numbers the user enters into their password
	int upperCase;			// This tracks the amount of uppercase letters the user enters into their password.
	int lowerCase;			// This tracks the amount of lowercase letters the user enters into their password.
	

	cout << "Welcome to the password creator! To begin, please read the following password requirements, listed below:\n";
	cout << endl;
	cout << "	--- Password Requirements ---- \n";
	cout << "- The password must be a minimum of 6 characters long\n";
	cout << "- The password must contain a minimum of 1 uppercase letter\n";
	cout << "- The password must contain a minimum of 1 lowercase letter.\n";
	cout << "- The password must contain a minimum of 1 digit.\n";
	cout << endl;

	do
	{
		upperCase = lowerCase = numbers = 0;

		cout << "Please enter your password: ";
		cin.getline(password, LENGTH);

		for (int i = 0; i < strlen(password); i++)
		{
			if (isdigit(password[i]))
			{
				numbers++;
			}
			if (isupper(password[i]))
			{
				upperCase++;
			}
			if (islower(password[i]))
			{
				lowerCase++;
			}
		}

		if (strlen(password) < 6)
		{							//Prompts an error message when the password length is too short - in this case, less than 6 characters.
			cout << "ERROR: Your password entered is not a minimum of 6 characters. Please re-enter.\n";
		}
		if (numbers == 0)
		{							//Prompts an error message when the password does not contain at least 1 number entered.
			cout << "ERROR: Your password does not have at least one number. Please re-enter.\n";
		}
		if (upperCase == 0)			//Prompts an error message when the password does not contain at least 1 uppercase letter.
		{
			cout << "ERROR: Your password requires 1 uppercase letter. Please re-enter.\n";
		}
		if (lowerCase == 0)
		{							//Prompts an error message when the password does not contain at least 1 lowercase letter.
			cout << "ERROR: Your password requires 1 lowercase letter. Please re-enter.\n";
		}

	} while (upperCase == 0 || lowerCase == 0 || numbers == 0 || strlen(password) < 6);

	cout << "Password confirmed! The password you have entered is: " << password << endl;

	
	return 0;
}