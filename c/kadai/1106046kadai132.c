// 1106046 kadai132.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int c, sum = 0, avg = 0;
	int data;

	printf("Enter a whole number (stops when Ctrl + Z is pressed): ");
	c = scanf("%d", &data);
	while (c != EOF)  //when ctrl Z is pressed, stop
	{
		sum += data;
		avg++;
		printf("Enter a whole number (stops when Ctrl + Z is pressed): ");
		c = scanf("%d", &data);
	}

	printf("Total:%d \n", sum);
	printf("Average:%.1f \n", sum / (float)avg);

	system("pause");
	return 0;
}