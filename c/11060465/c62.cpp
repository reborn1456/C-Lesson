#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#include <string>
#include <iostream>
using namespace std;

int main()
{
	char s1[100];
	char s2[100];

	strcpy(s1, "kobe");
	strcpy(s2, "denshi");

	cout << "Length of s1[] is " << strlen(s1) << endl;
	cout << "Length of s2[] is " << strlen(s2) << endl;

	if (strcmp(s1, s2) == 0)
	{
		cout << "s1[] and s2[] is the same word." << endl;
	}
	else if (strcmp(s1, s2) > 0)
	{
		cout << "s1[] has a bigger word code." << endl;
	}
	else if (strcmp(s1, s2) < 0)
	{
		cout << "s2[] has a bigger word code." << endl;
	}

	cout << "if you connect the two arrays " << strcat(s1, s2) << " is what you will get." << endl;

	system("pause");
	return 0;
}