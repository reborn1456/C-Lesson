// 1106046 kadai097.c

#include <stdio.h>

main()
{
	int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int c[10], j = 9;

	for (int i = 0; i < 10; i++)
	{
		c[j] = a[i];
		j--;
	}

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