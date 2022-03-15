// 1106046 kadai002a.c

#include <stdio.h>

main()
{
	double ia, ib;

	printf("2 numbers: ");
	scanf("%lf %lf", &ia, &ib);

	printf("*** %.1f and %.1f, basic calculation *** \n", ia, ib);
	printf("Add = %f  Minus = %f  Multiply = %f  Divide = %f \n", ia + ib, ia - ib, ia * ib, ia / ib);

	system("pause");
	return 0;
}