//Intro to Programming 1001 - Lab Test 2

/*
One interesting application of computers is to display graphs and bar charts. 
Write an application that reads five numbers between 1 and 30 from the user. 
Write a function called DisplayAsterisk that takes in 1 integer and outputs asterisks. 
For each number that’s read, your program should display the same number of adjacent asterisks. 
For example, if your program reads the number 7, it should display *******.
Display the bars of asterisks after you read all five numbers.
*/

#include <iostream>
using namespace std;

void DisplayAsterisk(int number);
int number[5];
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter a number between 1 and 30: ";
        cin >> number[i];
    }

    DisplayAsterisk(number[5]);
    return 0;
}

void DisplayAsterisk(int numberOfAsterisks)
{
    for (int i = 0; i < 5; i++)
    {
        cout << number[i] << ": ";
        for (int x = 0; x < number[i]; x++)
        {
            cout << "*";
        }
        cout << endl;
    }
}