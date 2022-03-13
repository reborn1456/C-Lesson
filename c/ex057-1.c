#include <stdio.h>

main()
{
	int tbl[3][3] = { {10, 20, 30} , {40, 50, 60} , {70, 80, 90} };
	int *p_tbl, i;

	p_tbl = tbl[0];

	printf("Contents in a 2D Array: \n");
	for (i = 0; i < 3; i++)
	{
		*p_tbl++;
	}

	for (i = 3; i < 6; i++)
	{
		printf(" %d ", *p_tbl++);
	}
	printf("\n");

	system("pause");
	return 0;
}