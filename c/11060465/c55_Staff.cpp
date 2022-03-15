#include "c55_Staff.h"

#include <iostream>
using namespace std;

void c55_Staff::SetData()
{
	cout << "Ž–¼= ";
	cin >> this->Name;

	cout << "Žž‹‹= ";
	cin >> this->PayPerHour;

	cout << "‹Î–±ŽžŠÔ= ";
	cin >> this->WorkHour;

	cout << "Žè“–‚Ä= ";
	cin >> this->Allowance;
}

void c55_Staff::showNameAndSalary()
{
	cout << "Ž–¼= " << this->Name << "\t";
	cout << "Žž‹‹= " << this->PayPerHour << "\t";
	cout << "‹Î–±ŽžŠÔ= " << this->WorkHour << "\t";
	cout << "Žè“–‚Ä= " << this->Allowance << endl;
}