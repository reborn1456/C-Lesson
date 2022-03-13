#include <stdio.h>

main()
{
	int count, sum = 0;

	for (count = 0; count <= 10; ++count)
	{
		sum += count;

		printf("From 1 to %d added together: %d \n", count, sum);
	}

	system("pause");
	return 0;
}