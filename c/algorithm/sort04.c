#include <stdio.h>
#define DCNT 8  //define the number of data

main()
{
	int i, j, w, gap;
	int d[DCNT] = { 70, 60, 80, 50, 40, 20, 30, 10 };

	//shell sort
	gap = DCNT / 2;  //total amount of data/2  to get the gap

	while (gap > 0)
	{
		for (i = gap; i < DCNT; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				for (int k = 0; k < DCNT; k++)
				{
					printf("%d ", d[k]);
				}
				printf("\n");
				getch();

				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else
				{
					break;
				}
			}
		}

		gap = gap / 2;
		printf("--------------------\n");
	}

	//show result
	for (i = 0; i < DCNT; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}