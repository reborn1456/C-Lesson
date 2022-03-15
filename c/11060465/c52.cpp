#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
#include "c50_Employee.h"
#include "c52.h"

#include <string>
#include <iostream>
using namespace std;

int main()
{
	Employee emp;

	setEmployee(&emp);
	showEmployee(emp);

	system("pause");
	return 0;
}