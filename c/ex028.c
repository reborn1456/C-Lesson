#include <stdio.h>

main()
{
	int gokei, ia;
	gokei = 0;

	printf("Input a number: ");
	scanf("%d", &ia);

	while (ia != -999)
	{
		gokei += ia;
		printf("Input a number: ");
		scanf("%d", &ia);
	}

	printf("Total: %d \n", gokei);

	system("pause");
	return 0;
}