#include <stdio.h>

main() 
{
	int i, j, gokei;

	//ONLY the 1st number in array can be skipped
	int a[][3] = { {10, 20, 30} , {1, 2, 3} };

	j = 0;
	do
	{
		for (gokei = 0, i = 0; i <= 2; i++)
		{
			printf("a[0][%d] = %d \n", i, a[0][i]);
			gokei += a[0][i];
		}
		printf("Vertical row 0's total: %d \n\n", gokei);

		for (gokei = 0, i = 0; i <= 2; i++)
		{
			printf("a[1][%d] = %d \n", i, a[1][i]);
			gokei += a[1][i];
			j += 1;
		}
		printf("Vertical row 1's total: %d \n\n", gokei);
	} while (j <= 2);

	system("pause");
	return 0;
}