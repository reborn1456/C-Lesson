// 1106046 kadai13f.c

#include <stdio.h>

void sort(int a[], int order)
{
	int w = 0;

	if (order == 0)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = i + 1; j < 8 + 1; j++)
			{
				if (a[i] > a[j])
				{
					w = a[i];
					a[i] = a[j];
					a[j] = w;
				}
			}
		}
	}
	else if (order == 1)
	{
		for (int i = 0; i < 8; i++)
		{
			for (int j = i + 1; j < 8 + 1; j++)
			{
				if (a[i] < a[j])
				{
					w = a[i];
					a[i] = a[j];
					a[j] = w;
				}
			}
		}
	}

	return;
}

main()
{
	int a[] = { 10, 25, 7, 45, 2, 100, 3, 70, 50 };
	int b;

	printf("In ascending order of descending order: ");
	scanf("%d", &b);

	printf("Before sort \n");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	sort(a, b);

	printf("After sort \n");
	for (int i = 0; i < 9; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}