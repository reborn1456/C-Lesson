#include <iostream>
#include <string>

using namespace std;

int main()
{
	float height, weight;

	cout << "input your height(cm) -> ";
	cin >> height;

	cout << "input your weight(kg) -> ";
	cin >> weight;

	cout << "BMI = " << weight / (height * 0.01 * height * 0.01) << endl;

	system("pause");
	return 0;
}