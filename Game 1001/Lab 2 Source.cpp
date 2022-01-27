// Intro to Programming 1001 - Lab 2

/*
Lab 2 Instructions:
- Declare 3 variables that will each hold a number (with decimal places).
- Call the variables number1, number2, number3.
- Ask the user to enter a number of their choice for each declared variable.
- Calculate the sum, product and average of the three variables and display the results to the user.
- Submit one .cpp (Lab2.cpp) to the dropbox. (Github repository link also acceptable)
*/

#include <iostream>
using namespace std;

int main()
{
    double number1, number2, number3, sum, product, average;
    cout << "Please enter a number of your choice for your 1st number: ";
    cin >> number1;
    cout << "Please enter a number of your choice for your 2nd number: ";
    cin >> number2;
    cout << "Please enter a number of your choice for your 3rd number: ";
    cin >> number3;
    cout << "\n";

    sum = number1 + number2 + number3;
    product = number1 * number2 * number3;
    average = (number1 + number2 + number3) / 3;

    cout << "The sum of " << number1 << ", " << number2 << " and " << number3 << " is: " << sum << "\n";
    cout << "The product of " << number1 << ", " << number2 << " and " << number3 << " is: " << product << "\n";
    cout << "The average of " << number1 << ", " << number2 << " and " << number3 << " is: " << average << "\n";

    return 0;
}