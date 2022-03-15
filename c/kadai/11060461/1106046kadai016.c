// 1106046 kadai016.c

#include <stdio.h>

main()
{
	int ia = 100, ib = 7;

	printf("*** 100 and 7, basic calculation *** \n");
	printf("100 + 7 = %d \n", ia + ib);
	printf("100 - 7 = %d \n", ia - ib);
	printf("100 * 7 = %d \n", ia * ib);
	printf("100 / 7 = %d  Remain: %d \n", ia / ib, ia % ib);

	system("pause");
	return 0;
}