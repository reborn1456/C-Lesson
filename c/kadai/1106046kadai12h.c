// 1106046 kadai12h.c

#include <stdio.h>

main()
{
	char a[20] = "kadai12h.c";
	char *p_a;

	p_a = a;

	printf("Array contents = ");
	while (*p_a)
	{
		putchar(*p_a++);
	}
	printf("\n");

	system("pause");
	return 0;
}