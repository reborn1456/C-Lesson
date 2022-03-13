#include <stdio.h>

main()
{
	int num, count = 0;

	printf("Input a number: ");
	scanf("%d", &num);

	for (count = 1; count <= 5; ++count)
	{
		printf("%d ", num * count);
	}

	system("pause");
	return 0;
}