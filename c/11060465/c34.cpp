#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "c34.h"
#include <iostream>

using namespace std;

int main()
{
	unsigned int Class;

	cout << "Please enter the class you are looking for: ";
	cin >> Class;

	if (Class > 0 && Class < 7)
	{
		Tutor(Class);
		Classroom(Class);
	}
	else
	{
		cout << "There is no such class." << endl;
	}

	system("pause");
	return 0;
}