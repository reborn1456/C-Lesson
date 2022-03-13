#include <stdio.h>

main()
{
	char *p_ride[3] = { "car", "bus", "shinkansen" };
	int i;

	for (i = 0; i <= 2; i++)
	{
		while (*p_ride[i])
		{
			putchar(*p_ride[i]++);
		}
		putchar('\n');
	}

	system("pause");
	return 0;
}