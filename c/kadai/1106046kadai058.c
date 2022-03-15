// 1106046 kadai058.c

#include <stdio.h>

main()
{
	int i = 32, count;

	while (i < 122)
	{
		count = 0;
		for (i; count < 10; i++)
		{
			printf("%X %c   ", i, i);
			count++;
		}
		printf("\n");
	}

	count = 0;
	for (i; count < 5; i++)
	{
		printf("%X %c   ", i, i);
		count++;
	}
	printf("\n");

	system("pause");
	return 0;
}