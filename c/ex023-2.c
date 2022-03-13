#include <stdio.h>

main()
{
	unsigned int year;

	printf("Input a year: ");
	scanf("%d", &year);

	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
	{
		printf("This year is a Leap Year. \n");
	}
	else
	{
		printf("This year is not a Leap Year. \n");
	}

	system("pause");
	return 0;
}