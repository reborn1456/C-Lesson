#include <stdio.h>

main()
{
	int num, sum;

	printf("Incert a number: ");
	scanf("%d", &num);

	sum = 0;
	do
	{
		sum += num;

		printf("Incert another number: ");
		scanf("%d", &num);

		if (num == -999) break;

	} while (num != -999);

	printf("The sum is: %d \n", sum);

	system("pause");
	return 0;
}