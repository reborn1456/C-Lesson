#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include"c45.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
	double a, b, c, a1, a2;
	bool solution;

	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;

	getQEr(a, b, c, &a1, &a2, &solution);

	if (solution == true)
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