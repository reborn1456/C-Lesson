#include <stdio.h>

main()
{
	char moji[11] = "ABCabc012 " ;

	printf("A = %d 0x%x	B = %d 0x%x \n", moji[0], moji[0], moji[1], moji[1]);
	printf("C = %d 0x%x	a = %d 0x%x \n", moji[2], moji[2], moji[3], moji[3]);
	printf("b = %d 0x%x	c = %d 0x%x \n", moji[4], moji[4], moji[5], moji[5]);
	printf("0 = %d 0x%x	1 = %d 0x%x \n", moji[6], moji[6], moji[7], moji[7]);
	printf("2 = %d 0x%x	  = %d 0x%x \n", moji[8], moji[8], moji[9], moji[9]);
	

	return 0;
}