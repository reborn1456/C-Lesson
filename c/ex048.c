#include <stdio.h>

main()
{
	int a[2][2][3] = { { {3, 4, 5} , {4, 5, 6} }, { { 2, 2, 3 }, { 2, 5, 6 } } };  //a[2 apartments][2 floors in apartment][3 rooms on each floor]

	int i, j, k, gokei;

	gokei = 0;

	j = 0;
	
	printf("Apartment 1 (ground floor): ");
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", a[0][0][i]);
		gokei += a[0][0][i];
	}
	printf("\t");

	printf("Apartment 1 (first floor): ");
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", a[0][1][i]);
		gokei += a[0][1][i];
	}
	printf("\n");

	printf("Apartment 2 (ground floor): ");
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", a[1][0][i]);
		gokei += a[1][0][i];
	}
	printf("\t");

	printf("Apartment 2 (first floor): ");
	for (i = 0; i <= 2; i++)
	{
		printf("%d ", a[1][1][i]);
		gokei += a[1][1][i];
		j += 1;
	}
	printf("\n");

	printf("There are %d people living in these aparments.\n", gokei);

	system("pause");
	return 0;
}







/*
printf("Apartment 1 (ground floor): ");
printf("Apartment 1 (first floor): ");
printf("Apartment 2 (ground floor): ");
printf("Apartment 2 (first floor): ");
for (i = 0; i < 2; i++)
{
	for (j = 0; j < 2; j++)
	{

		for (k = 0; k < 3; k++)
		{
			printf("%d ", a[i][j][k]);
			gokei += a[i][j][k];
		}
		printf("\t");
	}
	printf("\n");
*/