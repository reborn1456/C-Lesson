#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#include <string>
#include <iostream>

using namespace std;

int main()
{
	int *a, n, i, sum;

	cout << "Number of elements: ";
	cin >> n;

	a = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << "Data No." << (i + 1) << " ";
		cin >> a[i];
	}

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}

	cout << "Total: " << sum << endl;

	delete[] a;

	/* new�œ��I���������z��́Adelete�Ŕj�����Ȃ��ƃ������Ɏc�����܂܂ɂȂ�B���@���������[�N */

	system("pause");
	return 0;
}