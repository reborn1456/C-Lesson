#include <stdio.h>

void display1(int n1);
void display2(int *n2);

main()
{
	int a, b;
	printf("a ?: ");
	scanf("%d", &a);
	display1(a);
	printf("a = %d\n\n", a);

	printf("b ?: ");
	scanf("%d", &b);
	display2(&b);
	printf("b = %d\n\n", b);

	system("pause");
	return 0;
}

void display1(int n)
{
	printf("a is %d. \n", n);
	n += 10;
	return;
}

void display2(int *n)
{
	printf("b is %d. \n", *n);
	*n += 10;
	return;
}