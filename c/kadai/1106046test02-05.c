// 1106046 test02-05.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int i = 1, bai = 0;

	printf("3‚Ì”{”‚Å‚·\n");

	do
	{
		bai = i * 3;
		printf("%4d   ", bai);
		i++;
	} while (i <= 10);

	system("pause");
	return 0;
}