// 1106046 kadai095.c

#include <stdio.h>

main()
{
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int b[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	int sum, count;

	printf("The exchange of Array a and Array b \n");

	sum = 0;
	count = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += a[i];
		count++;
	}
	printf("Array a = ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("Sum: %d   Average: %d \n", sum, sum / count);

	sum = 0;
	count = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += b[i];
		count++;
	}
	printf("Array b = ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	printf("Sum: %d   Average: %d \n", sum, sum / count);

	system("pause");
	return 0;
}