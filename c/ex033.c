#include <stdio.h>

main()
{
	int num, i, sum = 0;
	float count = 0;

	printf("Incert a number: ");
	scanf("%d", &num);

	for (num; num != -999; num)
	{
		sum += num;
		count += 1;

		printf("Incert another number: ");
		scanf("%d", &num);
	}

	printf("Total: %d	Average: %.2f", sum, sum/count);

	system("pause");
	return 0;
}