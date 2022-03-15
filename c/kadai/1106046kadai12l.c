// 1106046 kadai12l.c

#include <stdio.h>

main()
{
	char a[256], *p_a;
	int count = 0;

	p_a = a;

	printf("Sentance = ");
	gets(a);

	count = strlen(a);

	printf("Work Count = %d\n", count);

	system("pause");
	return 0;
}