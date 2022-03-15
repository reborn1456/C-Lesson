// 1106046 kadai082.c

#include <stdio.h>

main()
{
	int num = 0, sum = 0, count = 0;

	while (num != 1234567890987654321)
	{
		printf("A whole number(will stop if -999 is entered): ");
		scanf("%d", &num);

		if (num == -999)
		{
			break;
		}

		if (num < 0) continue;

		sum += num;
		count++;
		 
	}

	printf("Sum: %d   Agerage: %.3f \n", sum, sum / (float)count);

	system("pause");
	return 0;
}