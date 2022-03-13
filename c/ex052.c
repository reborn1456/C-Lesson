#include <stdio.h>

main()
{
	int a = 100, b = 200, c;
	int *p_b;

	printf("Before: a = %d\tb = %d \n", a, b);

	c = a;
	p_b = &b;

	a = *p_b;
	b = c;

	printf("After: a = %d\tb = %d \n", a, b);


	system("pause");
	return 0;
}