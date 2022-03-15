// 1106046 kadai138.c

#include <stdio.h>

void PrintStar(int num)
{
	for (num; num > 0; num--)
	{
		printf("*");
	}
	printf("\n");
}

main()
{
	int star;

	printf("Whole number: ");
	scanf("%d", &star);

	PrintStar(star);

	system("pause");
	return 0;
}