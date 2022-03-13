#include <stdio.h>

main()
{
	int no1;
	int no2;

	printf("Input a whole number: ");
	scanf("%d", &no1);
	printf("Input another whole number: ");
	scanf("%d", &no2);

	printf("The total of two numbers added is: %d. \n", no1+no2);

	system("pause");
	return 0;
}