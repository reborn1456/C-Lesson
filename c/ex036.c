#include <stdio.h>

main()
{
	int i;

	printf("break test program \n");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)
		{
			break;
		}
		printf("%3d", i);
	}

	printf("\n\nContinue test program \n");
	for (i = 1; i <= 10; i++)
	{
		if (i == 7)
		{
			continue;
		}
		printf("%3d\n", i);
	}

	system("pause");
	return 0;
}