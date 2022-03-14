#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "enter a year -> ";
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		cout << "this is a leap year." << endl;
	}
	else
	{
		cout << "this is not a leap year." << endl;
	}

	system("pause");
	return 0;
}