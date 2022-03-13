#include <stdio.h>

main()
{
	unsigned int num, a, b, c;

	printf("Incert a number: ");
	scanf("%d", &num);

	a = 0;
	do				//move to the next line
	{
		b = a;
		do			//space control
		{
			printf(" ");

			b += 1;
		} while (b < num);

		c = 0;
		do			//asterisk control
		{
			printf("*");

			c += 1;
		} while (c <= a);

		printf("\n");
		a += 1;
	} while (a < num);

	system("pause");
	return 0;
}