// 1106046 kadai12p.c

#include <stdio.h>

main()
{
	char *day[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", NULL };
	char **p_day;

	p_day = day;

	while (*p_day != NULL)
	{
		printf("%s \n", *p_day++);
	}

	system("pause");
	return 0;
}