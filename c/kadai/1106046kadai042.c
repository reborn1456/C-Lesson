// 1106046 kadai042.c

#include <stdio.h>

main()
{
	int num = 1, sum = 0;

	sum += num;
	printf("%d", num);
	num++;

	while (sum <= 300)
	{
		sum += num;
		printf("+%d", num);
		num++;
	}

	printf("=%d \n", sum);

	system("pause");
	return 0;
}