#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

#define NMAX 20

void bubble(double *, int);

int main()
{
	double data[NMAX];
	int ndata, i;

	do
	{
		cout << "データ数を入力（最大 " << NMAX << "）" << endl;
		cin >> ndata;

		if (ndata < 1 || ndata > NMAX)
			cout << "データ数が範囲外です" << endl;
	} while (ndata < 1 || ndata > NMAX);

	for (i = 0; i < ndata; i++)
	{
		cin >> data[i];
	}

	bubble(data, ndata);

	cout << setprecision(21);

	cout << "　＊＊＊　ソート結果　＊＊＊　" << endl;

	for (i = 0; i < ndata; i++)
	{
		cout << setprecision(6) << fixed << data[i] << endl;
	}

	system("pause");
	return 0;
}

void bubble(double d[NMAX], int ndt)
{
	double tmp, *p, *q;
	int i, j;

	for (i = 0; i < ndt - 1; i++)
	{
		p = &d[i];

		for (j = i + 1; j < ndt; j++)
		{
			q = &d[j];

			if (*p < *q)
			{
				tmp = *p;
				*p = *q;
				*q = tmp;
			}
		}
	}

	return;
}