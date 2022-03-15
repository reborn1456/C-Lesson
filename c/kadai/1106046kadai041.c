// 1106046 kadai041.c

#include <stdio.h>

main()
{
	int num, sum = 0, count = 0;

	while (num != -999) 
	{
		printf("A whole number(will stop if -999 is entered): ");
		scanf("%d", &num);

		if (num != -999)
		{
			sum += num;
			count++;
		}
	}

	printf("Sum: %d \n", sum);
	printf("Agerage: %.2f \n", sum / (float)count);

	system("pause");
	return 0;
}