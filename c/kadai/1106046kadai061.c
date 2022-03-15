// 1106046 kadai061.c

#include <stdio.h>

main()
{
	int i = 1, count = 0;

	do
	{
		printf("%2d ", i);
		i++;
		count++;

		if (count % 10 == 0)
		{
			printf("\n");
		}

	} while (i < 21);

	system("pause");
	return 0;
}