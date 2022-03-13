#include <stdio.h>

main()
{
	int c, sum = 0, avg = 0;
	int data;

	printf("Enter a whole number: ");
	c = scanf("%d", &data);
	while (c != EOF)  //when ctrl Z is pressed, stop
	{
		sum += data;
		avg ++;
		printf("Enter a whole number: ");
		c = scanf("%d", &data);
	}

	printf("Total:%d\tAverage:%.2f\n", sum, sum / (float)avg);

	system("pause");
	return 0;
}