#include <stdio.h>
//#define WIDTH 19
//#define HEIGHT 15

main()
{
	//int meiro[HEIGHT][WIDTH];
	int i, j, d[5][5] = { {1, 1, 1, 1, 1}, {1, 0, 0, 0, 1} , {1, 0, 0, 0, 1} , {1, 0, 0, 0, 1} , {1, 1, 1, 1, 1} };

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (d[i][j] == 1)
			{
				printf("■");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}

	system("pause");
	return 0;
}