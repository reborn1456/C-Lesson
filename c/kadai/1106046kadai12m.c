// 1106046 kadai12m.c

#include <stdio.h>
#include <string.h>

main()
{
	char str1[128], *p_str1;
	char str2[128], *p_str2;

	p_str1 = str1;
	p_str2 = str2;

	printf("Sentance 1 = ");
	scanf("%s", str1);
	printf("Sentance 2 = ");
	scanf("%s", str2);

	strcat(str1, str2);

	printf("str1 = ");
	while (*p_str1)
	{
		putchar(*p_str1++);
	}
	printf("\n");

	system("pause");
	return 0;
}