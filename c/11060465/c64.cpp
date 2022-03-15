#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s1 = "kobe";
	int length = 0;

	length = s1.length();

	for (int i = length - 1; i >= 0; i--)
	{
		cout << s1.at(i);
	}

	cout << "\n";

	system("pause");
	return 0;
}