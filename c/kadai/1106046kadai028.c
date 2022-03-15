// 1106046 kadai028.c

#include <stdio.h>

main()
{
	long double num;

	printf("Number: ");
	scanf("%lf", &num);

	printf("Double = %.lf \n", num * 2);
	printf("Triple = %.lf \n", num * 3);
	printf("Quadruple = %.lf \n", num * 4);


	system("pause");
	return 0;
}