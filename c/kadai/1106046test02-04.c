// 1106046 test02-04.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int i = 1, bai = 0;

	printf("3‚Ì”{”‚Å‚·\n");

	while (i <= 10)
	{
		bai = i * 3;
		printf("%4d   ", bai);
		i++;
	}

	system("pause");
	return 0;
}