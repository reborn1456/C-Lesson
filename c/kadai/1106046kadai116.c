// 1106046 kadai116.c

#include <stdio.h>
#include <string.h>

main()
{
	char a[20], b[20];

	printf("1st Word: ");
	gets(a);

	printf("2nd Word: ");
	gets(b);

	strcat(a, b);

	printf("%s", a);
	printf("\n");

	system("pause");
	return 0;
}