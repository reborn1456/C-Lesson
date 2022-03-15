// 1106046 kadai12j.c

#include <stdio.h>
#include <string.h>

main()
{
	char a[10] = "ringo";
	char b[10], *p_a, *p_b;
	int count = 0;

	p_a = a;
	p_b = b;

	/*while (*p_a++)
	{
		count++;
	}*/

	count = strlen(a);

	p_a = &a[count - 1];

	while (count >= 0)
	{
		*p_b++ = *p_a--;
		count--;
	}
	p_b = '\0';

	p_a = a;

	printf("Array contents = ");
	while (*p_a)
	{
		putchar(*p_a++);
	}
	printf("\n");

	p_b = b;

	printf("Array contents opposite = ");
	while (*p_b)
	{
		putchar(*p_b++);
	}
	printf("\n");

	system("pause");
	return 0;
}