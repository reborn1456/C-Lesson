#include "c55_Staff.h"

#include <iostream>
using namespace std;

void c55_Staff::SetData()
{
	cout << "����= ";
	cin >> this->Name;

	cout << "����= ";
	cin >> this->PayPerHour;

	cout << "�Ζ�����= ";
	cin >> this->WorkHour;

	cout << "�蓖��= ";
	cin >> this->Allowance;
}

void c55_Staff::showNameAndSalary()
{
	cout << "����= " << this->Name << "\t";
	cout << "����= " << this->PayPerHour << "\t";
	cout << "�Ζ�����= " << this->WorkHour << "\t";
	cout << "�蓖��= " << this->Allowance << endl;
}