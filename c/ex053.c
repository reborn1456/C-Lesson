#include <stdio.h>

main()
{
	int a = 100, b = 200, c;
	int *p_a, *p_b;

	c = a;
	p_a = &a;
	p_b = &b;

	printf("Before: *p_a = %d\t*p_b = %d \n", *p_a, *p_b);

	p_a = p_b;
	p_b = &c;

	printf("After: *p_a = %d\t*p_b = %d \n", *p_a, *p_b);


	system("pause");
	return 0;
}