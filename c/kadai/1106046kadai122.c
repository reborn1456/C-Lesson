// 1106046 kadai122.c

#include <stdio.h>

main()
{
	int a = 5;
	int b = 30;
	int wrk, *p_a, *p_b, *p_wrk;

	p_a = &a;
	p_b = &b;
	p_wrk = &wrk;

	puts("Before");
	printf("a = %d   b= %d \n", *p_a, *p_b);

	p_wrk = p_a;
	p_a = p_b;
	p_b = p_wrk;

	puts("After");
	printf("a = %d   b= %d \n", *p_a, *p_b);

	system("pause");
	return 0;
}