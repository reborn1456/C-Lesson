#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>

#include <string>
#include <iostream>

using namespace std;

int main()
{
	int *student, num, i, sum;
	double average;

	cout << "Number of Students: ";
	cin >> num;

	student = new int[num];

	sum = 0;
	for (i = 0; i < num; i++)
	{
		cout << "Student No." << (i + 1) << "'s result: ";
		cin >> student[i];
		sum += student[i];
	}

	average = (double)sum / num;

	cout << "Average: " << average << endl;

	delete[] student;

	system("pause");
	return 0;
}