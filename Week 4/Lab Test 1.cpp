//// Game 1001 - Intro to Programming
//// Lab 3 TEST 1
//
//// Instructions are as follows:
//
///*
//A large company pays its salespeople on a commission basis. 
//The salespeople receive $200 per week plus 9% of their gross sales for that week.
//For example, a salesperson who sells $5,000 worth of merchandise in a week receives $200 plus 9% of $5,000, or a total of $650.
//The values of these items are shown in table below.
//Develop a C++ application that inputs one salesperson’s items sold for last week and calculates and displays that salesperson’s earnings. 
//There’s no limit to the number of items that can be sold.
//*/
//
//// Item 1 - $299.99
//// Item 2 - $87.75
//// Item 3 - $189.95
//// Item 4 - $150.89
//// Item 5 - $429.45
//
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// Variables for calculating Item 1
//	int item1UnitsSold;
//	float item1MoneyMade;
//	
//	// Variables for calculating Item 2
//	int item2UnitsSold;
//	float item2MoneyMade;
//	
//	// Variables for calculating Item 3
//	int item3UnitsSold;
//	float item3MoneyMade;
//	
//	// Variables for calculating Item 4
//	int item4UnitsSold;
//	float item4MoneyMade;
//
//	// Variables for calculating Item 5
//	int item5UnitsSold;
//	float item5MoneyMade;
//	
//	// Variables for calculating the gross income from selling items and overall earnings
//	float grossMoneyMade;
//	float overallEarnings;
//
//	cout << "Hello valuable employee!\nTo begin calculating your earnings, please enter the number of ITEM 1 units you have sold: ";
//	cin >> item1UnitsSold;
//	if (item1UnitsSold > 0)
//	{
//		item1MoneyMade = item1UnitsSold * 299.99;
//	}
//
//	cout << "Now, please enter the number of ITEM 2 units you have sold: ";
//	cin >> item2UnitsSold;
//	if (item2UnitsSold > 0)
//	{
//		item2MoneyMade = item2UnitsSold * 87.75;
//	}
//
//	cout << "Now, please enter the number of ITEM 3 units you have sold: ";
//	cin >> item3UnitsSold;
//	if (item3UnitsSold > 0)
//	{
//		item3MoneyMade = item3UnitsSold * 189.95;
//	}
//
//	cout << "Now, please enter the number of ITEM 4 units you have sold: ";
//	cin >> item4UnitsSold;
//	if (item4UnitsSold > 0)
//	{
//		item4MoneyMade = item3UnitsSold * 150.89;
//	}
//
//	cout << "Lastly, please enter the number of ITEM 5 units you have sold: ";
//	cin >> item5UnitsSold;
//	if (item5UnitsSold > 0)
//	{
//		item5MoneyMade = item5UnitsSold * 429.45;
//	}
//	
//	grossMoneyMade = item1MoneyMade + item2MoneyMade + item3MoneyMade + item4MoneyMade + item5MoneyMade;
//	overallEarnings = (grossMoneyMade * .09) + 200;
//
//	cout << "Congratulations employee! You have earned $" << overallEarnings << endl;
//
//	return 0;
//}