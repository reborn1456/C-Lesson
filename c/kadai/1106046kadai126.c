// 1106046 kadai126.c

#include <stdio.h>

main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int *p_data, max = 0, min = 999;

	p_data = data;

	printf("Array \n");
	printf("data[ ] = ");
	if (*p_data > max)
	{
		max = *p_data;
	}
	else if (*p_data < min)
	{
		min = *p_data;
	}
	printf("%d", *p_data++);
	for (int i = 0; i < 8; i++)
	{
		if (*p_data > max)
		{
			max = *p_data;
		}
		else if (*p_data < min)
		{
			min = *p_data;
		}

		printf(", %d", *p_data++);
		
	}
	printf("\n");

	printf("Biggest: %d \n", max);
	printf("Smallest: %d \n", min);

	system("pause");
	return 0;
}