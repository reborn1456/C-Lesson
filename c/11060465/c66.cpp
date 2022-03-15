#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c65_MyString.h"

#include <string>
#include <iostream>
using namespace std;

int main()
{
	Mystring s1, s2;
	s1 = "apple";
	s2 = "orange";

	cout << "s1 = " << s1.c_str() << "\tLength of word is: " << s1.length() << endl;
	cout << "s2 = " << s2.c_str() << "\tLength of word is: " << s2.length() << endl;

	cout << "The third letter of s1 is: " << s1.at(3-1) << endl;
	cout << "The fifth letter of s2 is: " << s2.at(5-1) << endl;

	s1.clear();    // •¶Žš—ñ‚ð‹ó‚É‚·‚é

	if (s1.empty())
	{
		cout << "s1 is empty.\n";
	}
	else
	{
		cout << "s1 is not empty.\n";
	}
	if (s2.empty())
	{
		cout << "s2 is empty.\n";
	}
	else
	{
		cout << "s2 is not empty.\n";
	}

	system("pause");
	return 0;
}