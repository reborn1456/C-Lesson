#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

float average(float a, float b)
{
	return (a + b) / 2;
}

int main()
{
	float a, b;

	cout << "Input 2 decimal numbers: ";
	cin >> a >> b;

	cout << "Average of the two numbers is: " << average(a, b) << endl;

	system("pause");
	return 0;
}