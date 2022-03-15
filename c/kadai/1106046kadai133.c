// 1106046 kadai133.c

#include <stdio.h>

main()
{
	int c, max = 0, min = 999;
	int data;

	printf("Enter a whole number (stops when Ctrl + Z is pressed): ");
	c = scanf("%d", &data);
	while (c != EOF)  //when ctrl Z is pressed, stop
	{
		if (data > max)
		{
			max = data;
		}
		else if (data < min)
		{
			min = data;
		}

		printf("Enter a whole number (stops when Ctrl + Z is pressed): ");
		c = scanf("%d", &data);
	}

	printf("Max:%d \n", max);
	printf("Min:%d \n", min);

	system("pause");
	return 0;
}