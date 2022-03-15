#include "c50_Employee.h"

#include <string>
#include <iostream>
using namespace std;

void setEmployee(Employee *emp)
{
	cout << "Name: ";
	cin >> emp->Name;
	cout << "Wage per Hour: ";
	cin >> emp->WagePerHour;
	cout << "Working Hour: ";
	cin >> emp->WorkHour;
	cout << "Allowance: ";
	cin >> emp->Allowance;

	return;
}