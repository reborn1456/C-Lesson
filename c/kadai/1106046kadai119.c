// 1106046 kadai119.c

#include <stdio.h>

main()
{
	char day[7][10] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (day[i][0] == 's')
			{
				putchar(day[i][j]);
			}
		}

		if (day[i][0] == 's')
		{
			putchar('\n');
		}
	}

	system("pause");
	return 0;
}