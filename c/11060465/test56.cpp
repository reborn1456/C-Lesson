#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int multi(int a)
{
	int result = 1;

	for (int i = 1; i <= a; i++)
	{
		result *= i;
	}

	return result;
}

int main()
{
	int a;

	cout << "Enter a number; ";
	cin >> a;
	
	cout << multi(a) << endl;

	system("pause");
	return 0;
}