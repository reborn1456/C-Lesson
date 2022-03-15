// 1106046 kadai065.c

#include <stdio.h>

main()
{
	int num, sum = 0, count = 0;

	do
	{
		printf("A whole number(will stop if -999 is entered): ");
		scanf("%d", &num);

		if (num != -999)
		{
			sum += num;
			count++;
		}
	} while (num != -999);

	printf("Sum: %d \n", sum);
	printf("Agerage: %f \n", sum / (float)count);

	system("pause");
	return 0;
}