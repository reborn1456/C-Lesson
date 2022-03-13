#include <stdio.h>
#include <stdlib.h>

void shisoku(int x, int y, int *wa, int *sa, int *sk, int *syo);

main()
{
	int a, b, c, d, e, f;

	printf("Value ?: ");
	scanf("%d", &a);

	printf("Value ?: ");
	scanf("%d", &b);

	shisoku(a, b, &c, &d, &e, &f);

	puts("Add, minus, times, divied of a and b");
	printf("wa = %d  sa = %d  seki = %d  syou = %d \n", c, d, e, f);

	system("pause");
	return 0;
}

void shisoku(int a, int b, int *c, int *d, int *e, int *f)
{
	*c = a + b;
	*d = abs(a - b);
	*e = a * b;
	*f = a / b;

	return;
}