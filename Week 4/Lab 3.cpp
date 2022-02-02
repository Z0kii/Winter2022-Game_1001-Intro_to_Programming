// Game 1001 - Intro to Programming
// Lab 3

// Instructions are as follows:

/*

Create two variables called "hoursWorked"and "hourlyRate".

Ask the user how many hours they worked in the week and their hourly rate. Populate the variables with necessary information.

Determine whether the user requires overtime pay. Overtime is typically applied when working greater than 40 hours per week.

Calculate total pay.
   - Regular pay is the number of hours worked multiplied by the hourly rate.

Overtime pay includes regular pay plus any hours exceeding 40 multiplied by “time and a half” or 1.5.
(Example: If I work 50 hours in the week, 40 hours will be regular pay and 10 hours will be overtime pay at 1.5 times the hourly rate..

Display regular pay.
Display overtime pay.
Display total pay.

*/

#include <iostream>

using namespace std;

int main()
{
    int hoursWorked;
    int hourlyRate;

    cout << "Hello valuable employee! To begin your wage calculations, please enter the gross number of hours you worked this week:\n";
    cin >> hoursWorked;

    cout << "\nNow, please enter your standard hourly rate:\n";
    cin >> hourlyRate;


    return 0;
}