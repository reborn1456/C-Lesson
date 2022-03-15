// 1106046 kadai12b.c

#include <stdio.h>

main()
{
	int a[30] = { 3, 5, 7, 9, 11, 13, 15, 17, 19, 21 };
	int b[30] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42 };
	int *p_a, *p_b, c;


	p_a = a;
	p_b = b;


	printf("----- Before ----- \n");
	printf("a[ ] = ");
	printf("%d", *p_a++);
	for (int i = 0; i < 9; i++)
	{
		printf(", %d", *p_a++);
	}
	printf("\n");

	for (int i = 0; i < 10; i++)
	{
		*p_a = *p_b;

		p_a++;
		p_b++;
	}

	p_a = a;

	printf("----- After ----- \n");
	printf("a[ ] = ");
	printf("%d", *p_a++);
	for (int i = 0; i < 19; i++)
	{
		printf(", %d", *p_a++);
	}
	printf("\n");

	system("pause");
	return 0;
}