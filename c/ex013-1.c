#include <stdio.h>

main()
{
	char su1;
	char su2;

	su1 = '5';
	su2 = '6';

	printf("5 x 6 = %d \n", (su1-0x30)*(su2-0x30));

	return 0;
}