// 1106046 kadai128.c

#include <stdio.h>

main()
{
	int a[30] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
	int b[30] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42 };
	int *p_a, *p_b;

	p_a = a;
	p_b = b;

	printf("Array \n");
	printf("data[ ] = ");
	*p_b += *p_a++;
	printf("%d", *p_b++);
	for (int i = 0; i < 9; i++)
	{
		*p_b += *p_a++;

		printf(", %d", *p_b++);

	}
	printf("\n");

	system("pause");
	return 0;
}