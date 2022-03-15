#include "c50_Employee.h"

#include <string>
#include <iostream>
using namespace std;

void showEmployee(Employee emp)
{
	cout << emp.Name << "\t" << emp.WagePerHour * emp.WorkHour + emp.Allowance << endl;

	return;
}