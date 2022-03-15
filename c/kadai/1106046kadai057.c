// 1106046 kadai057.c

#include <stdio.h>

main()
{
	char A;

	printf("A lower case alphabet: ");
	scanf("%c", &A);

	A += 1;

	for (int i = A - 32; i <= 90; i++)
	{
		printf("%c ", i);
	}
	printf("\n");

	system("pause");
	return 0;
}