#include <string>
#include "c23_getBmi.h"
#include <iostream>

using namespace std;

int main()
{
	float height, weight, bmi;

	cout << "input your height(cm) -> ";
	cin >> height;

	cout << "input your weight(kg) -> ";
	cin >> weight;

	bmi = getBmi(height, weight);

	cout << "BMI = " << bmi << endl;

	system("pause");
	return 0;
}