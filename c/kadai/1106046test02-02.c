// 1106046 test02-02.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	float a, b, go, hei;

	printf("���������āI");
	scanf("%f %f", &a, &b);

	go = a + b;
	hei = (a + b) / 2;

	printf("���v�F%f    ���ρF%f\n", go, hei);

	system("pause");
	return 0;
}