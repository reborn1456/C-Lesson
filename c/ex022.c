#include <stdio.h>

main()
{
	int no;

	printf("Input the year you were born: ");
	scanf("%d", &no);
	if (no > 1988)
	{
		printf("You were born in Heisei. \n");
	}
	else
	{
		printf("You were born in Syouwa. \n");
	}

	system("pause");
	return 0;
}