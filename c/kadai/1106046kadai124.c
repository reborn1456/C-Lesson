// 1106046 kadai124.c

#include <stdio.h>

main()
{
	char c, *c_p;

	c_p = &c;

	printf("A letter: ");
	scanf("%c", &c);

	printf("The next letter: %c\n", ++*c_p);

	system("pause");
	return 0;
}