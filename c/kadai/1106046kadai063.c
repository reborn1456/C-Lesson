// 1106046 kadai063.c

#include <stdio.h>

main()
{
	int i = 1, count;

	while (i <= 20)
	{
		count = 0;
		do
		{
			printf("%2d ", i);
			i++;
			count++;
		} while (count < 10);
		printf("\n");
	}

	system("pause");
	return 0;
}