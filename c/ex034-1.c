#include <stdio.h>

main()
{
	unsigned int num, a = 0;

	printf("Incert a number: ");
	scanf("%d", &num);


	do
	{
		printf("***** \n");

		a += 1;
	} while (a != num);


	system("pause");
	return 0;
}