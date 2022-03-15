// 1106046 kadai098.c

#include <stdio.h>

main()
{
	int data[] = { 10, 5, 23, 29, 2, 6, 3, 1, 70, 100 };
	int g = 0, s = 999;

	for (int i = 0; i < 10; i++)
	{
		if (data[i] > 0 && data[i] < 999)
		{
			if (data[i] > g)
			{
				g = data[i];
			}
			else if (data[i] < s)
			{
				s = data[i];
			}
		}
	}

	printf("Array data: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
	printf("Greatest: %d   Samllest: %d \n", g, s);

	system("pause");
	return 0;
}