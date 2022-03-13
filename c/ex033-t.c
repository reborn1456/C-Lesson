#include <stdio.h>

main()
{
	int num = 0, i, sum = 0;

	for (i = 0; num != -999; i++)
	{
		sum += num;

		printf("Incert a number: ");
		scanf("%d", &num);
	}

	printf("Total: %d	Average: %.2f \n", sum, (float)sum / (i - 1));

	system("pause");
	return 0;
}