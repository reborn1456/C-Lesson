// 1106046 kadai052.c

#include <stdio.h>

main()
{
	int i = 1, count;

	while (i < 61)
	{
		count = 0;
		for (i; count < 20; i++)
		{
			printf("%2d  ", i);
			count++;
		}
		printf("\n");
	}

	system("pause");
	return 0;
}