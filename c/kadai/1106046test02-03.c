// 1106046 test02-03.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, bai;

	printf("3‚Ì”{”‚Å‚·\n");

	for (i = 1; i <= 10; i++)
	{
		bai = i * 3;
		printf("%4d   ", bai);
	}

	system("pause");
	return 0;
}