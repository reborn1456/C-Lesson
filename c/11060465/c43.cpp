#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c43.h"

#include <string>
#include <iostream>

using namespace std;

int main()
{
	int d[] = { 5, 3, 6, 7, 1, 5, 2, 9, 4, 8 };
	int cnt = sizeof(d) / sizeof(d[0]);
	int oddCnt = getOddCnt(d, cnt);

	cout << "There are " << oddCnt << " even numbers." << endl;

	system("pause");
	return 0;
}