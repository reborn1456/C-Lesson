// 1106046 kadai081.c

#include <stdio.h>

main()
{
	int num = 0, sum = 0, count = 0;

	while (num != 1234567890987654321)
	{
		printf("A whole number(will stop if -999 is entered): ");
		scanf("%d", &num);

		if (num != -999)
		{
			sum += num;
			count++;
		}
		else if (num == -999)
		{
			break;
		}
	}

	printf("Sum: %d \n", sum);
	printf("Agerage: %.3f \n", sum / (float)count);

	system("pause");
	return 0;
}