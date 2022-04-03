#include "Calendar.h"
#include <iostream>

int Calendar::calculateMonthDays(int monthNum, int year)
{
    Month* month;

    if (monthNum == 2) // Checks to see if month entered is February (2)
    {
        month = &this->feb;
    }
    else if (monthNum == 1 || monthNum == 3 || monthNum == 5 || monthNum == 7 || monthNum == 8 || monthNum == 10 || monthNum == 12)
    {
        month = &this->month31;
    }
    else
    {
        month = &this->month30;
    }

    return month->calculateDays(year);
};

int February::calculateDays(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 29;
    else
        return 28;
}

int Month30::calculateDays(int year)
{
    return 30;
}

int Month31::calculateDays(int year)
{
    return 31;
}

