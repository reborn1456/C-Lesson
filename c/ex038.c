#include <stdio.h>

main()
{
	int num = 0;

	printf("Incert a number: ");
	scanf("%d", &num);

	if (num >= 10 && num <= 49)
	{
		switch (num/10)
		{
		case 1:
			printf("The number is between 10 and 19. \n");
			break;
		case 2:
			printf("The number is between 20 and 29. \n");
			break;
		case 3:
			printf("The number is between 30 and 39. \n");
			break;
		case 4:
			printf("The number is between 40 and 49. \n");
			break;
		}
	}
	else
	{
		printf("Error. \n");
	}

	system("pause");
	return 0;
}


/*
switch(value / 10)
 {
	case 0: ...; break; // 0 - 9
	case 1: ...; break; // 10 - 19
	...
} 
*/

/*
switch((value-1) / 10)
{
	case 0: ...; break; // 1 - 10
	case 1: ...; break; // 11 - 20
	...
}
*/