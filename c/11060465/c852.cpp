#include <iostream>
using namespace std;

void entry(int *p)
{
	cout << "Enter 10 whole numbers: ";
	for (int i = 0; i < 10; i++)
	{
		cin >> *p;
		p++;
	}
}

void sum(int *p)
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += *p;
		p++;
	}
	cout << "Sum of the numbers is " << sum << endl;
}

int main()
{
	int data[10];

	entry(data);
	sum(data);

	system("pause");
	return 0;
}