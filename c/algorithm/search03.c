#include <stdio.h>

main()
{
	int low, high, mid, s, d[11] = {10, 15, 18, 23, 28, 35, 47, 55, 68, 78, 98};

	printf("The number searching for: ");
	scanf("%d", &s);

	low = 0;
	high = 10;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (s == d[mid])
		{
			break;
		}

		if (s > d[mid])
		{
			low = mid + 1;
		}
		else if (s < d[mid])
		{
			high = mid - 1;
		}
	}

	if (low > high)
	{
		printf("Couldn't find. \n");
	}
	else
	{
		printf("%d \n", mid + 1);
	}



	system("pause");
	return 0;
}