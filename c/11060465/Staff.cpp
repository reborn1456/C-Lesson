#include "Staff.h"

#include <iostream>
using namespace std;

void Staff::setData()
{
	cout << "����= ";
	cin >> this->Name;

	cout << "����= ";
	cin >> this->PayPerHour;

	cout << "�Ζ�����= ";
	cin >> this->WorkHour;
}

void Staff::showNameAndSalary()
{
	cout << "����= " << this->Name << "\t";
	cout << "����= " << this->PayPerHour << "\t";
	cout << "�Ζ�����= " << this->WorkHour << endl;
}