#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int no, max;
	string judge;

	cout << "Whole number: ";
	cin >> no;

	max = (int)sqrt((double)no);

	if (no >= 2)
	{
		judge = "a prime number.";
	}
	else
	{
		judge = "not a prime number.";
	}

	for (int i = 2; i <= max; i++)
	{
		if (no % i == 0)
		{
			judge = "not a prime number.";
			break;
		}
	}

	cout << no << " is " << judge << endl;

	system("pause");
	return 0;
}