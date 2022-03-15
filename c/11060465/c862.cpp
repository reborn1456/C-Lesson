#include <iostream>
using namespace std;

int maxMin(int *data, int *p_min)
{
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		if (*data > max)
		{
			max = *data;
		}
		else if (*data < *p_min)
		{
			*p_min = *data;
		}
		*data++;
	}

	return max;
}

int main()
{
	int data[] = { 5, 8, 3, 2, 6 }, min, max;

	max = maxMin(data, &min);

	cout << "The largest number is " << max << endl;
	cout << "The smallest number is " << min << endl;

	system("pause");
	return 0;
}