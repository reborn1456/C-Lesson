#include "Staff.h"

#include <iostream>
using namespace std;

void Staff::setData()
{
	cout << "Ž–¼= ";
	cin >> this->Name;

	cout << "Žž‹‹= ";
	cin >> this->PayPerHour;

	cout << "‹Î–±ŽžŠÔ= ";
	cin >> this->WorkHour;
}

void Staff::showNameAndSalary()
{
	cout << "Ž–¼= " << this->Name << "\t";
	cout << "Žž‹‹= " << this->PayPerHour << "\t";
	cout << "‹Î–±ŽžŠÔ= " << this->WorkHour << endl;
}