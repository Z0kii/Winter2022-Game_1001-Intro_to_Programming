#include <iostream>
#include <iomanip>
using namespace std;

// Prototype the functions:
void scoreSorter(double*, int);
double averageCalculator(double*, int);

int main()
{
	int amountOfScores;
	double* dynamicArray = nullptr;
	double Average;

	cout << "Welcome to the score calculator!\nHow many scores are you calculating? ";
	cin >> amountOfScores;
	dynamicArray = new double[amountOfScores];

	cout << "Please enter each of your scores.\n";

	for (int i = 0; i < amountOfScores; i++)
	{
		do
		{
			cout << "Score #" << (i + 1) << " is: ";
			cin >> *(dynamicArray + i);

			if (*(dynamicArray + i) < 0)
			{
				cout << "ERROR! All scores entered must be greater than 0.\n";
				cout << "Please re-enter your score: ";
			}

		} while (*(dynamicArray + i) < 0);

	}

	scoreSorter(dynamicArray, amountOfScores);
	Average = averageCalculator(dynamicArray, amountOfScores);

	cout << "Your test scores are displayed below in ascending order:\n";
	for (int i = 0; i < amountOfScores; i++)
	{
		cout << "#" << (i + 1) << " is: " << *(dynamicArray + i) << endl;
	}

	cout << fixed << showpoint << setprecision(2); // This keeps the Average displayed from showing as a massive decimal.
	cout << "The average score is: " << Average << endl;

	delete dynamicArray;
	dynamicArray = nullptr;
	
	return 0;
}

void scoreSorter(double* dynamicArray, int Scores) // The function "scoreSorter" sorts the scores in the array in ascending order.
{
	int arraySorter;
	int minimumIndex;
	double minimumValue;

	for (arraySorter = 0; arraySorter < (Scores - 1); arraySorter++)
	{
		minimumIndex = arraySorter;
		minimumValue = *(dynamicArray + arraySorter);

		for (int i = arraySorter + 1; i < Scores; i++)
		{
			if (*(dynamicArray + i) < minimumValue)
			{
				minimumValue = *(dynamicArray + i);
				minimumIndex = i;
			}
		}
		*(dynamicArray + minimumIndex) = *(dynamicArray + arraySorter);
		*(dynamicArray + arraySorter) = minimumValue;
	}
}

double averageCalculator(double* dynamicArray, int numberOfScores) // The function "averageCalculator" simply calculates the average of all array numbers entered.
{
	double total{};

	for (int i = 0; i < numberOfScores; i++)
	{
		total += *(dynamicArray + i);
	}

	return total / numberOfScores;
}