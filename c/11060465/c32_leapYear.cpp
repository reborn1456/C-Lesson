#include <iostream>

using namespace std; 

void leapYear (int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "this is a leap year." << endl;
	}
	else
	{
		cout << "this is not a leap year." << endl;
	}

	return;
}

bool b_leapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}