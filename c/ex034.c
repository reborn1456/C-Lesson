#include <stdio.h>

main()
{
	int i = 0;

	do
	{
		i += 1;

		printf("i = %d \n", i);
	} while (i < 10);

	system("pause");
	return 0;
}