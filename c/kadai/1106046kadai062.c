// 1106046 kadai062.c

#include <stdio.h>

main()
{
	int i = 20, count = 0;

	do
	{
		printf("%2d ", i);
		i--;
		count++;

		if (count % 10 == 0)
		{
			printf("\n");
		}

	} while (i > 0);

	system("pause");
	return 0;
}