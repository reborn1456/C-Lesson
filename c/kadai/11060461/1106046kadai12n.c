// 1106046 kadai12n.c

#include <stdio.h>

main()
{
	char *p = "Nippon";
	int count = 0;

	while (*p++)
	{
		count++;
	}
	printf("%d\n", count);

	p--;

	printf("Showing from the opposite direction = ");
	for (p--, count; count > 0; count--)
	{
		printf("%c", *p--);
	}
	printf("\n");

	system("pause");
	return 0;
}