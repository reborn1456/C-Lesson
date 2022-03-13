#include <stdio.h>

main()
{
	int a[] = { 11, 22, 33, 44, 55, 66 }, *p_a, count;
	float b[] = { 11.1, 22.2, 33.3, 44.4}, *p_b, sum;

	
	for (sum = 0, count = 0, p_a = a; count <= 5; p_a++)
	{
		sum += *p_a;
		count += 1;
	}
	printf("Array a Sum = %d\tAverage = %.3f \n", (int) sum, sum / 6);

	for (sum = 0, count = 0, p_b = b; count <= 3; p_b++)
	{
		sum += *p_b;
		count += 1;
	}
	printf("Array a Sum = %.3f\tAverage = %.3f \n", sum, sum / 4);

	system("pause");
	return 0;
}