#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c44.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
	double a, b, c, a1, a2;

	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;

	if (getQE(a, b, c, &a1, &a2) == true)
	{
		cout << "The first answer is " << a1 << endl;
		cout << "The second answer is " << a2 << endl;
	}
	else
	{
		cout << "There are no answers to it." << endl;
	}

	system("pause");
	return 0;
}