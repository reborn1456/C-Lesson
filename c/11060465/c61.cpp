#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#include <string>
#include <iostream>
using namespace std;

int main()
{
	char c;
	string m;
	char s[10];
	int i;

	c = 'A';
	m = "SCHOOL";

	strcpy(s, "School");

	cout << c << endl;
	cout << m << endl;
	for (i = 0; i < 10; i++)
	{
		cout << s[i] << "\t" << (int)s[i] << endl;
	}

	system("pause");
	return 0;
}