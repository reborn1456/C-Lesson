#include <stdio.h>

main()
{
	int month;

	printf("Input a month: ");
	scanf("%d", &month);
	
	if (month >= 1 && month <= 12)
	{
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			printf("The last day of month is 31st. \n");
		}
		else if (month == 2)
		{
				printf("The last day of month is 28th. \n");
		}
		else
		{
			printf("The last day of month is 30th. \n");
		}
	}
	else
	{
		printf("There is no such month. \n");
	}

	system("pause");
	return 0;
}