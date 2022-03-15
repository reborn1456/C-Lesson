// 1106046 kadai036.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int ia, ib;

	printf("Whole number 1: ");
	scanf("%d", &ia);
	printf("Whole number 2: ");
	scanf("%d", &ib);

	if (ia > ib)
	{
		printf("%d is bigger than %d by %d \n", ia, ib, abs(ia - ib));
	}
	else if (ia < ib)
	{
		printf("%d is smaller than %d by %d \n", ia, ib, abs(ib - ia));
	}
	else if (ia == ib)
	{
		printf("They are the same. \n");
	}

	system("pause");
	return 0;
}