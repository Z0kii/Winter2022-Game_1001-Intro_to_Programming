#define _CRT_SECURE_NO_WARNINGS // For some reason Visual Studio was refusing to compile due to "localtime" being "unsafe"
                                // I checked StackOverflow and one user suggested definining "_CRT_SECURE_NO_WARNINGS" and it solved my issue.
                                // I hope this workaround is okay!
#include <iostream>
#include <ctime>
#include <time.h>
#include "Calendar.h"
using namespace std;


int main()
{
    Calendar cal;
    
    int month, year;
    time_t epSeconds;
    tm *pCalendarTime = nullptr;
    epSeconds = time(NULL);
    pCalendarTime = localtime(&epSeconds);

    string currentMonth[] = 
    {                                                       // I hope it's alright, but I referenced one of your code examples 
        "January", "February", "March", "April",            // you posted on Blackboard this week for this.
        "May", "June", "July", "August", "September",       // It was extremely helpful in making the current month display correctly.
        "October", "November", "December"                   // Thank you!
    };

    do
    {
        cout << "Input month and year, separated by a space,\n" << "or enter '0 0' to display current month and terminate: ";
        cin >> month >> year;
        if (month == 0 || year == 0) // if month = 0 & year = 0, displays current date.
        {
            cout << endl;
            cout << "The current month, " << currentMonth[pCalendarTime->tm_mon] << ", has " << cal.calculateMonthDays(month, year) << " days.";
            cout << endl;
        }
        else //else, display the days in the month for the inputs entered.
        {
            cout << cal.calculateMonthDays(month, year) << "\n";
        }
    } while (month != 0 || year != 0); // Continue looping back for new inputs as long as the inputs for month != 0 and year != 0.

    return 0;
}
