// Lab 5 - Arrays & Vectors - Intro to Programming GAME1001


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
    vector<int> lessOrEqualToAvg;
    vector<int> greaterToAvg;

    cout << "Please enter " << NUM_INTEGERS << " random integers of your choosing.\n";
    for (i = 0; i < NUM_INTEGERS; i++)
    {
        cin >> digitsEntered[i];
        arraySum += digitsEntered[i];
    }

    cout << "The sum of your " << NUM_INTEGERS << " digits entered is : " << arraySum << endl;

    average = arraySum / NUM_INTEGERS;
    cout << "The average of your " << NUM_INTEGERS << " digits entered is : " << average << endl;
    
    i = 0;
    for(i = 0; i < 10; i++)
    {
        if (digitsEntered[i] <= average)
        {
            lessOrEqualToAvg.push_back(digitsEntered[i]);
        }
    }
   
    i = 0;
    for (i = 0; i < 10; i++)
    {
        if (digitsEntered[i] > average)
        {
            greaterToAvg.push_back(digitsEntered[i]);
        }
    }

    cout << "The vector that contains all digits less or equal to the average of " << average << " displays the following:" << endl;

    i = 0;
    while (i < lessOrEqualToAvg.size())
    {
        cout << lessOrEqualToAvg[i] << endl;
        i++;
    }

    cout << "The vector that contains all digits greater than the average of " << average << " displays the following:" << endl;

    i = 0;
    while (i < greaterToAvg.size())
    {
        cout << greaterToAvg[i] << endl;
        i++;
    }

    return 0;
}