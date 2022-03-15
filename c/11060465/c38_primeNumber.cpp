#include <string>

using namespace std;

string primeNumber(int no)
{
	string judge;
	int max = 0;

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

	return judge;
}