#include <stdio.h>

main()
{
	int math;
	int no1;
	int no2;

	printf("Press 1 for +	Press 2 for -	Press 3 for *	Press 4 for / \n");
	scanf("%d", &math);
	printf("Input two numbers: ");
	scanf("%d", &no1);
	scanf("%d", &no2);

	if(math == 1)
	{
		printf("%d + %d = %d \n", no1, no2, no1 + no2);
	}
	else if (math == 2)
	{
		printf("%d - %d = %d \n", no1, no2, no1 - no2);
	}
	else if (math == 3)
	{
		printf("%d * %d = %d \n", no1, no2, no1 * no2);
	}
	else if (math == 4)
	{
		printf("%d / %d = %d \n", no1, no2, no1 / no2);
	}

	/*switch (math)
	{
	case 1:
		printf("%d + %d = %d \n", no1, no2, no1 + no2);
		break;
	case 2:
		printf("%d - %d = %d \n", no1, no2, no1 - no2);
		break;
	case 3:
		printf("%d * %d = %d \n", no1, no2, no1 * no2);
		break;
	case 4:
		printf("%d / %d = %d \n", no1, no2, no1 / no2);
		break;
	}*/

	system("pause");
	return 0;
}