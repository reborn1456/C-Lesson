#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c42.h"
#include <string>
#include <iostream>

using namespace std;

#define CNT 10

int main()
{
	int d[CNT];

	cout << "Enter 10 whole numbers: ";

	for (int i = 0; i < CNT; i++)
	{
		cin >> d[i];
	}

	cout << "Total: " << setprecision(4) << fixed << getAverage(d) << endl;

	system("pause");
	return 0;
}