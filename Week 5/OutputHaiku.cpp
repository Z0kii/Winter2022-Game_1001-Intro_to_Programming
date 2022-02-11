// Lab 4 - File 2/2 - Intro to Programming 1001

/*
In a console application, create a gaming related haiku. Note: This haiku can be hard-coded in your source code. 
Save the haiku to a text file called haiku.txt. Provide the user with the necessary confirmation messages of saving to a file.
In  another console application, read in the file haiku.txt and print out the contents to the console.  
You do not need to create another project. Simply create another .cpp file.

NOTE: A haiku has a 5 - 7 - 5 syllable structure. First line has 5 syllables, second has 7 syllables, third has 5 syllables.

Submit 2 .cpp files called OutputHaiku.cpp and InputHaiku.cpp.
*/


//Include the required directories:
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream outputHaikuFile;
	string haikuLines;
;
	outputHaikuFile.open("haiku.txt");
	cout << "Here is the haiku I wrote!\n";
	cout << endl;
	
	if (outputHaikuFile)
	{
		string haikuLines;
		
		while (getline(outputHaikuFile, haikuLines)) // This allows the program to read haiku.txt line by line, instead of word for word.
		{
			cout << haikuLines << endl;
		}
	}
	else // This is just a safety net to make sure that the user running the .cpp file is able to access the haiku.txt file.
	{
		cout << "The file has not been found! Please check your file explorer, and run InputHaiku.cpp again.";
	}
	
	outputHaikuFile.close();	// As always, don't forget to close the file once completed.
	
	return 0;	//	return 0 as always.
}