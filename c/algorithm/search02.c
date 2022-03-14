#include <stdio.h>

main()
{
	int s, i, d[11] = {10, 5, 30, 77, 16, 3, 47, 29, 37, 33};

	printf("Search a number: ");
	scanf("%d", &s);

	d[10] = s;

	i = 0;
	while (s!=d[i])
	{
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