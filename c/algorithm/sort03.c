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

	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j + 1] >= d[j])
			{
				break;
			}
			else
			{
				w = d[j + 1];
				d[j + 1] = d[j];
				d[j] = w;
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