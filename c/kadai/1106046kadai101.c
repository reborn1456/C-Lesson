// 1106046 kadai101.c

#include <stdio.h>

main()
{
	int a[5][5] = { {1, 2, 3, 4, 5} , {6, 7, 8, 9, 10} , {11, 12, 13, 14, 15} , {16, 17, 18, 19, 20} , {21, 22, 23, 24, 25} };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" %2d ", a[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}