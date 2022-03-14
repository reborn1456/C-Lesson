#include <iostream>

using namespace std;

void olympicYear(int year)
{
	if (year > 1895 && year % 4 == 0)
	{
		cout << "this is a olympics year." << endl;
	}
	else
	{
		cout << "this is not a olympics year." << endl;
	}

	return;
}

bool b_olympicYear(int year)
{
	if (year > 1895 && year % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}