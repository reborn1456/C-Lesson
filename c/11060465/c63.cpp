#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str1;
	string str2;

	str1 = "kobe";
	str2 = "denshi";

	cout << "Length of s1[] is " << str1.length() << endl;
	cout << "Length of s2[] is " << str2.length() << endl;

	if (str1 == str2)
	{
		cout << "s1[] and s2[] is the same word." << endl;
	}
	else if (str1 > str2)
	{
		cout << "s1[] has a bigger word code." << endl;
	}
	else if (str1 < str2)
	{
		cout << "s2[] has a bigger word code." << endl;
	}

	str1 += str2;
	cout << "if you connect the two arrays " << str1 << " is what you will get." << endl;

	system("pause");
	return 0;
}