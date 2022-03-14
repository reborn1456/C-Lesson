#include <stdio.h>

int tbl_gokei3(int tbl[], int number);

main()
{
	int a[] = { 10, 20, 30, 40, 50 }, gokei;
	gokei = tbl_gokei3(a, 5);
	printf("gokei = %d \n", gokei);

	system("pause");
	return 0;
}

int tbl_gokei3(int tbl[], int number)
{
	int gokei = 0, i = 0;

	for (number; number > 0; number--)
	{
		gokei += tbl[i];
		i++;
	}

	return (gokei);
}