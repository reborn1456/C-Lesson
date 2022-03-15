// 1106046 kadai083.c

#include <stdio.h>

main()
{
	for (int i = 1; i < 21; i++)
	{
		if (i%2 == 0) continue;

		printf("%d ", i);
	}
	printf("\n");

	system("pause");
	return 0;
}