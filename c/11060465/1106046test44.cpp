#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int tbl[] = { 5, 2, 6, 1, 3, 8, 4 }, g, i;
	int *p;

	p = tbl;

	for (g = 0, i = 0; i < 7; i++)
	{
		g += *p++;
	}

	cout << "合計：" << g << "\t平均：" << g / 7 << endl;

	system("pause");
	return 0;
}