// 1106046 test02-02.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	float a, b, go, hei;

	printf("実数を入れて！");
	scanf("%f %f", &a, &b);

	go = a + b;
	hei = (a + b) / 2;

	printf("合計：%f    平均：%f\n", go, hei);

	system("pause");
	return 0;
}