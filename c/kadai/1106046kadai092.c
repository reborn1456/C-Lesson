// 1106046 kadai092.c

#include <stdio.h>

main()
{
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int c[10];

	for (int i = 0; i < 10; i++)
	{
		c[i] = a[i];
	}

	printf("Copy from Array a to Array c \n");
	printf("Array a = ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
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