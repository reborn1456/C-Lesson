// 1106046 kadai123.c

#include <stdio.h>

main()
{
	double a, b, *p_a, *p_b;

	p_a = &a;
	p_b = &b;

	printf("Number 1: ");
	scanf("%lf", &a);
	printf("Number 2: ");
	scanf("%lf", &b);

	if (*p_a > *p_b)
	{
		printf("The bigger number is: %f\n", *p_a);
	}
	else
	{
		printf("The bigger number is: %f\n", *p_b);
	}

	system("pause");
	return 0;
}