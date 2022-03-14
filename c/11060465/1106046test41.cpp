#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 5;
	int *p, *q;

	p = &a;
	q = &b;

	cout << *p * *q << endl;

	system("pause");
	return 0;
}