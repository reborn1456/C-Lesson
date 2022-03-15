// 1106046 kadai096.c

#include <stdio.h>

main()
{
	int count = 0, num = 0, c[10];

	for (int i = 0; i < 10; i++)
	{
		printf("A whole number(will stop if -999 is entered): ");
		scanf("%d", &num);

		if (num != -999)
		{
			c[i] = num;
			count++;
		}
		else if (num == -999)
		{
			break;
		}
	}

	for (int i = 0; i < count; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}