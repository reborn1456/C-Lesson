// 1106046 test01-04.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, c;

	printf("1�ڂ̐�������́F ");
	scanf("%d", &a);
	printf("2�ڂ̐�������́F ");
	scanf("%d", &b);
	printf("3�ڂ̐�������́F ");
	scanf("%d", &c);

	printf("\n");

	printf("���v�F%d\t���ρF%.4f\n", a + b + c, (a + b + c) / 3.f);


	system("pause");
	return 0;
}