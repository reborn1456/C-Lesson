#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c38.h"
#include <iostream>

using namespace std;

int main()
{
	int no;

	cout << "Whole number: ";
	cin >> no;

	cout << no << " is " << primeNumber(no) << endl;

	system("pause");
	return 0;
}