// 1106046 kadai024.c

#include <stdio.h>

main()
{
	int ia, ib;

	printf("2 Whole numbers: ");
	scanf("%d %d", &ia, &ib);

	printf("*** %d and %d, basic calculation *** \n", ia, ib);
	printf("%d + %d = %d \n", ia, ib, ia + ib);
	printf("%d - %d = %d \n", ia, ib, ia - ib);
	printf("%d * %d = %d \n", ia, ib, ia * ib);
	printf("%d / %d = %d  Remain: %d \n", ia, ib, ia / ib, ia % ib);

	system("pause");
	return 0;
}