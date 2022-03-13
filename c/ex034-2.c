#include <stdio.h>

main()
{
	unsigned int num, a = 0;
	int star = 5;

	printf("Incert a number: ");
	scanf("%d", &num);


	do
	{
		while (star != 0)
		{
			printf("*");

			star -= 1;
		}
			
		printf("\n");
		star = 5;
		a += 1;
	} while (a != num);

	system("pause");
	return 0;
}