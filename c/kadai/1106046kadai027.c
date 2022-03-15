// 1106046 kadai027.c

#include <stdio.h>

main()
{
	double num;

	printf("Number: ");
	scanf("%lf", &num);

	printf("1/2 = %f \n", num * 1 / 2);
	printf("1/3 = %f \n", num * 1 / 3);
	printf("1/4 = %f \n", num * 1 / 4);

	system("pause");
	return 0;
}