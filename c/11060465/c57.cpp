#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c57_Account.h"

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string Name;
	int Balance;
	string Phone;
	Account *acc;
	int cmd;

	acc = nullptr;

	do
	{
		cout << "1: Create Account\t2: Balance\t3: Cancel Account\t4: Finish   ";
		cin >> cmd;

		switch (cmd)
		{
		case 1:
			if (acc == nullptr)
			{
				cout << "Name: ";
				cin >> Name;
				cout << "Balance: ";
				cin >> Balance;
				cout << "Phone Number: ";
				cin >> Phone;

				acc = new Account(Name, Balance, Phone);
			}
			else
			{
				cout << "There is already an account created." << endl;
			}
			break;
		case 2:
			if (acc == nullptr)
			{
				cout << "There is no such account." << endl;
			}
			else
			{
				acc->showBalance();
			}
			break;
		case 3:
			if (acc == nullptr)
			{
				cout << "There is no such account." << endl;
			}
			else
			{
				delete acc;
				acc = nullptr;
			}
			break;
		case 4:
			if (acc != nullptr)
			{
				delete acc;
			}
			break;
		}
	} while (cmd != 4);

	system("pause");
	return 0;
}