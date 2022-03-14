#include <string>
#include <iomanip>
#include "c32.h"
#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "enter a year -> ";
	cin >> year;

	//leapYear(year);
	//olympicYear(year);

	if (b_leapYear(year))
	{
		cout << "this is a leap year." << endl;
	}
	else
	{
		cout << "this is not a leap year." << endl;
	}
	if (b_olympicYear(year))
	{
		cout << "this is a olympics year." << endl;
	}
	else
	{
		cout << "this is not a olympics year." << endl;
	}

	system("pause");
	return 0;
}