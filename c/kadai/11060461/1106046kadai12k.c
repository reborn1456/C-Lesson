// 1106046 kadai12k.c

#include <stdio.h>

main()
{
	char a[20] = "mikan to ringo";
	char *p_a;

	p_a = a;

	printf("Array contents without space = ");
	while (*p_a)
	{
		if (*p_a != ' ')
		{
			putchar(*p_a);
		}
		*p_a++;
	}
	printf("\n");

	system("pause");
	return 0;
}