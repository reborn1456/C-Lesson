#include <string>
#include <iomanip>
#include "c24_getWeight.h"
#include <iostream>

using namespace std;

int main()
{
	float height, weight, bmi;

	cout << "input your height(cm) -> ";
	cin >> height;

	weight = getWeight(height);

	cout << setprecision(2)/* this tells it to how many places from the first number */ << fixed/*with this it becomes to how many decimal places */;

	cout << "your weight should be = " << weight << endl;

	system("pause");
	return 0;
}