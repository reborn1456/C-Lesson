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

	cout << "s1 = " << s1.c_str() << ".\tLength of word = " << s1.length() << endl;
	cout << "s2 = " << s2.c_str() << ".\tLength of word = " << s2.length() << endl;

	system("pause");
	return 0;
}