// 1106046 kadai13e.c

#include <stdio.h>

void MaxMin(int a[], int *ma, int *mi)
{
	for (int i = 0; i < 9; i++)
	{
		if (a[i] > *ma)
		{
			*ma = a[i];
		}
		else if (a[i] < *mi)
		{
			*mi = a[i];
		}
	}
	return;
}

main()
{
	int a[] = { 10, 25, 7, 45, 2, 100, 3, 70, 50 };
	int max = 0, min = 999;

	printf("Contents in array \n");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	MaxMin(a, &max, &min);

	printf("max = %d \t min = %d \n", max, min);

	system("pause");
	return 0;
}