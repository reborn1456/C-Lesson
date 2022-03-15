// 1106046 kadai12i.c

#include <stdio.h>

main()
{
	char a[20] = "mikan";
	char b[20], *p_a, *p_b;

	p_a = a;
	p_b = b;

	while (*p_b++ = *p_a++);
	p_b = '\0';

	p_b = b;

	printf("Copied array contents = ");
	while (*p_b)
	{
		putchar(*p_b++);
	}
	printf("\n");

	system("pause");
	return 0;
}