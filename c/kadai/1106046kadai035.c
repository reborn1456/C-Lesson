// 1106046 kadai035.c

#include <stdio.h>

main()
{
	int num;

	printf("Whole number: ");
	scanf("%d", &num);

	if (num > 0)
	{
		printf("Positive number. \n");
	}
	else if (num < 0)
	{
		printf("Negative number. \n");
	}
	else if (num == 0)
	{
		printf("The number is zero. \n");
	}

	system("pause");
	return 0;
}