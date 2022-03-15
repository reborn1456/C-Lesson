// 1106046 kadai056.c

#include <stdio.h>

main()
{
	char a;

	printf("A lower case alphabet: ");
	scanf("%c", &a);

	a += 1;

	for (int i = a; i <= 122; i++)
	{
		printf("%c ", i);
	}
	printf("\n");

	system("pause");
	return 0;
}