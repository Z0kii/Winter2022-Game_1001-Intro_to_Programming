#include <iostream>
using namespace std;


class Month
{
public:
    virtual int calculateDays(int year) = 0;
};

/* 
* NOTE ON THE CLASS INHERITENCE I USED:
* I used something here that I don't believe was tought in the lectures - Class inheritence.
* A good friend of mine who's quite good with C++ walked me through it and taught me how it works.
* Essentially, it allows a new class to inherit members of an already existing class.
* As you can see I'm using it to feed the inputs into the correct months classes - February, Month30, & Month31.
*/


// Special class for February
class February : public Month 
{
    int calculateDays(int year);
};

// Month with 30 days
class Month30 : public Month 
{
    int calculateDays(int year);
};

// Month with 31 days
class Month31 : public Month
{
    int calculateDays(int year);
};


 // Class "Calendar" that integrates everything
class Calendar
{
private:
    February feb;
    Month30 month30;
    Month31 month31;

public:
    int calculateMonthDays(int monthNum, int year);
};
