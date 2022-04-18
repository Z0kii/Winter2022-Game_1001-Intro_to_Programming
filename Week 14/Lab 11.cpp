//  Vowels and Consonants 
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctype.h>
#include <string>
using namespace std;

const int SIZE = 100;

// Function prototypes
int vowels(char*);
int consonants(char*);
char* lowerCase(char*);
char* upperCase(char*);

//int main()
//{
//    char choice;         // Menu selection char.
//    char cstring[SIZE];  // This holds the string entered.
//
//
//    cout << "Enter a string: "; // This prompts the user to enter their string
//    cin.getline(cstring, SIZE);
//
//    // Displays the menu.
//    do
//    {
//        cout << endl;
//        cout << "A) Count the vowels in the string\n";
//        cout << "B) Count the consonants in the string\n";
//        cout << "C) Makes your string all lowercase\n";
//        cout << "D) Makes your string in all UPPERCASE\n";
//        cout << "E) Exit the program\n";
//        cout << endl;
//
//        cout << "Enter A, B, C, D, or E: ";         // Asks the user to choose what they want to do to their string entered.
//        cin >> choice;
//
//        while (toupper(choice) < 'A' || toupper(choice) > 'E')
//        {
//            cout << "Enter ONLY A, B, C, D, or E: ";
//            cin >> choice;
//            cout << endl;
//        }
//
//        if (choice == 'A' || choice == 'a')      // Displays how many vowels are in the word.
//        {
//            cout << "The string has " << vowels(cstring) << " vowels.\n";
//        }
//        else if (choice == 'B' || choice == 'b') // Displays how many consonants are in the word.
//        {
//            cout << "The string has " << consonants(cstring) << " consonants.\n";
//        }
//        else if (choice == 'C' || choice == 'c') // Makes the string all lowercase
//        {
//            cout << "The string lowercase is displayed as: " << lowerCase(cstring) << endl;
//        }
//        else if (choice == 'D' || choice == 'd') // Makes the string all uppercase
//        {
//            cout << "The string lowercase is displayed as: " << upperCase(cstring) << endl;
//        }
//
//    } while (toupper(choice) != 'E');
//
//    return 0;
//}


int vowels(char* str = nullptr) // This function counts the vowels.
{
    char vowels[] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };
    int numberOfVowels = 0;

    while (*str != 0)
    {
        for (int count = 0; count < 10; count++)
        {
            if (*str == vowels[count])
            {
                numberOfVowels++;
                break;
            }
        }
        str++;
    }
    return numberOfVowels;
}


int consonants(char* str = nullptr)   // This function counts the consonants.
{
    char v[] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u' };
    int numberOfConsonants = 0, foundVowel;

    while (*str != 0)
    {
        foundVowel = 0;
        for (int count = 0; count < 10; count++)
        {
            if (*str == v[count])
            {
                foundVowel = 1;
                break;
            }
        }
        if (!foundVowel)
            numberOfConsonants++;
        str++;
    }
    return numberOfConsonants;
}


char* lowerCase(char* str = nullptr)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = tolower(str[i]);
    }
    return str;
}

char* upperCase(char* str = nullptr)
{
    for (int i = 0; str[i]; i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}