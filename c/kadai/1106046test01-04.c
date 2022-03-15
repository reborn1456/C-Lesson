// 1106046 test01-04.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c;

	printf("1つ目の整数を入力： ");
	scanf("%d", &a);
	printf("2つ目の整数を入力： ");
	scanf("%d", &b);
	printf("3つ目の整数を入力： ");
	scanf("%d", &c);

	printf("\n");

	printf("合計：%d\t平均：%.4f\n", a + b + c, (a + b + c) / 3.f);


	system("pause");
	return 0;
}