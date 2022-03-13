#include <stdio.h>

main()
{
	int no;

	printf("Input a whole number: ");
	scanf("%d", &no);
	if (no < 0)
	{
		printf("The number inputted is a negative number. \n");
	}
	else
	{
		printf("The number inputted is a positive number. \n");
	}

	system("pause");
	return 0;
}