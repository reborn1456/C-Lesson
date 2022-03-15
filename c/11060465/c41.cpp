#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	int d[10], sum = 0;

	cout << "Enter 10 whole numbers: ";

	for (int i = 0; i < 10; i++)
	{
		cin >> d[i];
		sum += d[i];
	}

	cout << "Total: " << sum << endl;

	system("pause");
	return 0;
}