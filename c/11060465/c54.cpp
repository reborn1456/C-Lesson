#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "Staff.h"

#include <string>
#include <iostream>
using namespace std;

#define STF_NUM 5

int main()
{
	Staff stf[STF_NUM];
	
	for (int i = 0; i < STF_NUM; i++)
	{
		stf[i].setData();
	}

	for (int i = 0; i < STF_NUM; i++)
	{
		stf[i].showNameAndSalary();
	}

	system("pause");
	return 0;
}