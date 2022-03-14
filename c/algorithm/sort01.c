#include <stdio.h>
#define SIZE 5

main()
{
	int i, j, w, d[5] = { 30, 7, 25, 16, 10 };

	printf("Before swap: ");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d ", d[i]);
	}
	printf("\n");

	for (i = 0; i < SIZE; i++)
	{
		for (j = i + 1; j < SIZE + 1; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	printf("After swap: ");
	for (i = 0; i < SIZE; i++)
	{
		printf(" %d ", d[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}