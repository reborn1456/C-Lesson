#include <iostream>
using namespace std;

double calcSum(double a, double b)
{
	double sum;

	sum = a + b;

	return sum;
}

int main()
{
	double num1, num2, sum;

	cout << "Enter 2 decimal numbers: ";
	cin >> num1 >> num2;

	sum = calcSum(num1, num2);

	cout << "The sum of these numbers is " << sum << endl;

	system("pause");
	return 0;
}