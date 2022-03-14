#include <stdio.h>

main()
{
	int s, i, d[10] = {10, 5, 30, 77, 16, 3, 47, 29, 37, 33};

	printf("Search a number: ");
	scanf("%d", &s);

	i = 0;
	while (i < 10)
	{
		if (s == d[i])
		{
			break;
		}

		i++;
	}

	if (i == 10)
	{
		printf("No such number. \n");
	}
	else
	{
		printf("%d \n", i);
	}

	system("pause");
	return 0;
}