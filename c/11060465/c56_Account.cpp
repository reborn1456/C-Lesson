#include "c56_Account.h"

#include <iostream>
using namespace std;

Account::Account(string Name, int Balance)
{
	this->Name = Name;
	this->Balance = Balance;

	cout << this->Name << " have just created a bank account." << endl;
}

Account::~Account()
{
	cout << this->Name << " has cancelled the account." << endl;
}

void Account::showBalance()
{
	cout << this->Name << "'s balance has \\" << this->Balance << " left." << endl;
}