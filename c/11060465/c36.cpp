#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "c36.h"
#include <iostream>

using namespace std;

int main()
{
	int su1, su2;

	cout << "���� = ";
	cin >> su1;
	cout << "���� = ";
	cin >> su2;

	cout << "�ő���񐔂́A" << getGcd(su1, su2) << "�ł�" << endl;

	system("pause");
	return 0;
}