// 1106046 kadai117.c

#include <stdio.h>

main()
{
	char day[7][10] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };

	for (int i = 0; i < 7; i++)
	{
		puts(day[i]);
	}

	system("pause");
	return 0;
}