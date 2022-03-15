// 1106046 test03-03.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int dat[10], i, j, work;

	for (i = 0; i < 10; i++)
	{
		printf("dat[%d]  :  ", i + 1);
		scanf("%d", &dat[i]);
	}

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (dat[i] < dat[j])
			{
				work = dat[i];
				dat[i] = dat[j];
				dat[j] = work;
			}
		}
	}

	printf("\n~‡Œ‹‰Ê\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d   ", dat[i]);
	}

	system("pause");
	return 0;
}