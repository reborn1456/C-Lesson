// 1106046 kadai12d.c

#include <stdio.h>

main()
{
	int b[5][5] = { {3, 6, 9, 12, 15} , {18, 21, 24, 27, 30} , {33, 36, 39, 42, 45} , {48, 51, 54, 57, 60} , {63, 66, 69, 72, 75} };
	int c[5][5], *p_b, *p_c;

	p_b = &b[0][0];
	p_c = &c[0][0];

	for (int i = 0; i < 25; i++)
	{
		*p_c++ = *p_b++;
	}

	p_c = &c[0][0];

	printf("Array c \n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf(" %2d ", *p_c++);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}