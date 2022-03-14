#include <stdio.h>

main()
{
	int i, j, w, d[5] = { 30, 7, 25, 16, 10 };

	printf("Before swap: ");
	for (i = 0; i < 5; i++)
	{
		printf(" %d ", d[i]);
	}
	printf("\n");

	for (i = 4; i >= 0; i--)
	{
		for (j = 0; j < 5; j++)
		{
			if (d[j] > d[j + 1])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}

	printf("After swap: ");
	for (i = 0; i < 5; i++)
	{
		printf(" %d ", d[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}