#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

float calc(float a, float b)
{
	float answer = a + b;

	return answer;
}

int main()
{
	float x = 10.5f, y = 1.1f;
	cout << "‡Œv = " << calc(x, y) << endl;

	system("pause");
	return 0;
}