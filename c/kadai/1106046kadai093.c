// 1106046 kadai093.c

#include <stdio.h>

main()
{
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int b[10] = { 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
	int c[10];

	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i] + b[i];
	}

	printf("Sum of Array a and Array b to Array c \n");
	printf("Array a = ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("Array b = ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");

	printf("Array c = ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}