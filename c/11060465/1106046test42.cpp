#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int *p, *q;

	p = &x;
	q = &y;

	*p = 4;
	*q = 6;

	cout << *p - *q << endl;

	system("pause");
	return 0;
}