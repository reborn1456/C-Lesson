// 1106046 kadai037.c

#include <stdio.h>

main()
{
	int num;

	printf("A number between 0 and 100: ");
	scanf("%d", &num);

	if (num >= 90)
	{
		printf("5 \n");
	}
	else if (num >= 80 && num < 90)
	{
		printf("4 \n");
	}
	else if (num >= 50 && num < 80)
	{
		printf("3 \n");
	}
	else if (num >= 30 && num < 50)
	{
		printf("2 \n");
	}
	else if (num >= 0 && num < 30)
	{
		printf("1 \n");
	}

	system("pause");
	return 0;
}