#include <stdio.h>

main()
{
	float x[3][2], gokei;
	int i, j;

	j = 0;
	do
	{
		for (gokei = 0, i = 0; i <= 1; i++)
		{
			printf("x[0][%d] = ", i);
			scanf("%f", &x[0][i]);
			gokei += x[0][i];
		}
		printf("Vertical row 0's average: %.2f \n\n", gokei / 2);

		for (gokei = 0, i = 0; i <= 1; i++)
		{
			printf("x[1][%d] = ", i);
			scanf("%f", &x[1][i]);
			gokei += x[1][i];
		}
		printf("Vertical row 1's average: %.2f \n\n", gokei / 2);

		for (gokei = 0, i = 0; i <= 1; i++)
		{
			printf("x[2][%d] = ", i);
			scanf("%f", &x[2][i]);
			gokei += x[2][i];
			j += 1;
		}
		printf("Vertical row 2's average: %.2f \n\n", gokei / 2);
	} while (j <= 1);

	system("pause");
	return 0;
}