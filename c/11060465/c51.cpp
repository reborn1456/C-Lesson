#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c50_Employee.h"

#include <string>
#include <iostream>
using namespace std;

#define EMP_NUM 5

int main()
{
	int i;
	Employee emp[EMP_NUM];

	for (i = 0; i < EMP_NUM; i++)
	{
		cout << "Name: ";
		cin >> emp[i].Name;
		cout << "Wage per Hour: ";
		cin >> emp[i].WagePerHour;
		cout << "Working Hour: ";
		cin >> emp[i].WorkHour;
	}

	for (i = 0; i < EMP_NUM; i++)
	{
		cout << emp[i].Name << "\t" << emp[i].WagePerHour * emp[i].WorkHour << endl;
	}

	system("pause");
	return 0;
}