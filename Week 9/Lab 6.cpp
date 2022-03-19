//Intro. to Programming 1001
//Lab 6 - Functions
/*
The formula for converting a temperature from Fahrenheit to Celsius is:
C = (5/9) * (F - 32)
where F is the Fahrenheit temperature and C is the Celsius temperature.

Write a function named celsius that accepts a Fahrenheit temperature as an
argument and returns the temperature converted to Celsius. Demonstrate the function
by calling it in a loop that displays a table of the Fahrenheit temperatures -20 through 100
and their Celsius equivalents. 

(Side note: this range represents the temperatures in Toronto from the coldest to the hottest ever recorded days).

NOTE: There should NOT be a user input for this assignment.
*/
//
//#include <iostream>
//using namespace std;
//
//double celsius(double); // Prototype the function that converts F to C.
//
//int main()
//{
//    cout << "Now displaying all Celsius equivalents between -20 & 100 degrees Fahrenheit.\n";
//    cout << "Fahrenheit is displayed on the left, with its Celsius equivalent on the right.\n";
//    cout << endl;
//
//    for (int fahrenheitTemp = -20; fahrenheitTemp <= 100; fahrenheitTemp += 1)
//    {   // This for loop is responsible for looping the temperature back around to convert for each degree.
//        double celsiusTemp;
//        celsiusTemp = celsius(fahrenheitTemp);  // This calls the function.
//        cout << "   F = " << fahrenheitTemp << "    C = " << celsiusTemp << endl;
//    }
//}
//
//double celsius(double fahrenheit) // This is the function that converts the Fahrenheit temperature to Celsius.
//{
//    double celsiusTemp;
//    celsiusTemp = (5.0 / 9.0) * (fahrenheit - 32);
//    return celsiusTemp;
//}