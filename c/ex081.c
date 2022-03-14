#include <stdio.h>
#include <string.h>

void sortOne(int s[], char bs[]);

main()
{
	int data[8] = { 6, 10, 8, 2, 9, 5, 1, 7 }, i;
	char bs[10];

	for (i = 0; i < 8; i++)
	{
		printf(" %d ", data[i]);
	}
	printf("\n\n");

	printf("Sort from biggest or from smallest: ");
	gets(bs);

	sortOne(data, bs);

	for (i = 0; i < 8; i++)
	{
		printf(" %d ", data[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

void sortOne(int sort[], char bs[])
{
	int i, j, w = 0;
	char *b = "biggest";
	char *s = "smallest";

	if (strcmp(bs, b) == 0)
	{
		for (i = 0; i < 7; i++)
		{
			for (j = i + 1; j < 8; j++)
			{
				if (sort[i] < sort[j])
				{
					w = sort[i];
					sort[i] = sort[j];
					sort[j] = w;
				}
			}
		}
	}
	else if (strcmp(bs, s) == 0)
	{
		for (i = 0; i < 7; i++)
		{
			for (j = i + 1; j < 8; j++)
			{
				if (sort[i] > sort[j])
				{
					w = sort[i];
					sort[i] = sort[j];
					sort[j] = w;
				}
			}
		}
	}

	return;
}