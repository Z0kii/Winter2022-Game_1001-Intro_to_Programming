//// Game 1001 - Intro to Programming
//// Lab 3
//// Instructions are as follows:
///*
//Create two variables called "hoursWorked" and "hourlyRate".
//
//Ask the user how many hours they worked in the week and their hourly rate. Populate the variables with necessary information.
//
//Determine whether the user requires overtime pay. Overtime is typically applied when working greater than 40 hours per week.
//
//Calculate total pay.
//   - Regular pay is the number of hours worked multiplied by the hourly rate.
//
//Overtime pay includes regular pay plus any hours exceeding 40 multiplied by “time and a half” or 1.5.
//(Example: If I work 50 hours in the week, 40 hours will be regular pay and 10 hours will be overtime pay at 1.5 times the hourly rate..
//
//Display regular pay.
//Display overtime pay.
//Display total pay.
//*/
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int hoursWorked;
//    float hourlyRate;
//   
//
//    cout << "Hello valuable employee!\n \nTo begin your wage calculations, \nplease enter the gross number of hours you worked this week: ";
//    cin >> hoursWorked;
//
//    cout << "\nNow, please enter your standard hourly rate: ";
//    cin >> hourlyRate;
//
//    // I created an "if/else if" statement below to calculate the pay, depending on whether or not overtime has been worked.
//    if(hoursWorked > 40)
//    {
//        cout << "\nRegular pay: $" << (hourlyRate * 40) << endl; // Multiplies the hourly rate by 40 - the max number of normal working hours
//        cout << "Overtime Pay: $" << ((hoursWorked - 40) * hourlyRate * 1.5) << endl; // Subtracts 40 from the hours worked to isolate only the overtime hours, then multiplies them by the hourly rate times 1.5.
//        cout << "Total pay: $" << ((hoursWorked - 40) * hourlyRate * 1.5) + (hourlyRate * 40) << endl; // Combines the two equations written above to create the gross pay.
//    }    
//    else if (hoursWorked <= 40) // To calculate pay if overtime was NOT worked.
//    {
//        cout << "\nRegular pay: $" << (hoursWorked * hourlyRate) << endl; // Calculates regular pay.
//        cout << "Overtime pay: $0.00\n";
//        cout << "Total pay: $" << (hoursWorked * hourlyRate) << endl; // Since no overtime has been worked, regular pay & total pay will be the same.
//    }
//    return 0;
//}