// 1106046 kadai032.c

#include <stdio.h>

main()
{
	int num;

	printf("A whole number: ");
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("This is an even number. \n");
	}
	else
	{
		printf("This is an odd number. \n");
	}

	system("pause");
	return 0;
}