// 1106046 kadai13c.c

#include <stdio.h>

void Swap(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;

	return;
}

main()
{
	int a = 10, b = 20;

	printf("Values before function: \n");
	printf("a = %d \t b = %d \n", a, b);

	Swap(&a, &b);

	printf("Values after function: \n");
	printf("a = %d \t b = %d \n", a, b);

	system("pause");
	return 0;
}