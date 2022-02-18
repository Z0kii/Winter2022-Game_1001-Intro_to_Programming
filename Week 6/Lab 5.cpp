// Lab 5 - Arrays & Vectors - Intro to Programming GAME1001

/*
Instructions:
Write a C++ console application that will split an array into two vectors.
	
	1. Create an array that hold 10 integers.
	
	2. Allow the user to enter integers into the newly created array.
	
	3. Determine what the average number is of the array.
	
	4. Create two integer vectors. One vector will hold numbers less than or equal to the average number. 
	The other vector will hold numbers greater than the average number.
	
	5. Using the average number, split your array into the two vectors.
	
	6. Display both vectors to the console.

Submit a single .cpp file to the dropbox.
*/

#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

int main()
{
    const int NUM_INTEGERS = 10;
    float digitsEntered[NUM_INTEGERS];
    float average;
    int arraySum = 0;
    int i;

    cout << "Please enter " << NUM_INTEGERS << " random integers of your choosing.\n";
    for (i = 0; i < NUM_INTEGERS; i++)
    {
        cin >> digitsEntered[i];
        arraySum += digitsEntered[i];
    }

    cout << "The sum of your" << NUM_INTEGERS << " digits entered is : " << arraySum << endl;

    average = arraySum / NUM_INTEGERS;
    cout << "The average of your" << NUM_INTEGERS << " digits entered is : " << average << endl;
    
    cout << "These are the digits that are less or equal to the average: " << average << endl;
    i = 0;
    for(i = 0; i < 10; i++)
    {
        if (digitsEntered[i] <= average)
        {
            cout << digitsEntered[i] << endl;
        }
    }
   
    cout << "These are the digits that are greater than the average: " << average << endl;
    i = 0;
    for (i = 0; i < 10; i++)
    {
        if (digitsEntered[i] > average)
        {
            cout << (digitsEntered[i]) << endl;
        }
    }

    return 0;
}