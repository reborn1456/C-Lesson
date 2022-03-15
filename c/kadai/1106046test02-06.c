// 1106046 test02-06.c

#include <stdio.h>
#include <stdlib.h>

main()
{
	int num = 10, sum = 0;

	printf("3‚Ì”{”‚Å‚·\n");

	while (num <= 100)
	{
		sum += num;
		num += 5;
	}

	printf("˜aF %d   ", sum);

	system("pause");
	return 0;
}