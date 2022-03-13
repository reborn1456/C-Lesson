#include <stdio.h>

main()
{
	unsigned int num, a, b;

	printf("Incert a number: ");
	scanf("%d", &num);

	a = 0;
	do
	{
		b = 0;
		do
		{
			printf("*");

			b += 1;
		} while (b <= a);

		printf("\n");
		a += 1;
	} while (a < num);

	system("pause");
	return 0;
}