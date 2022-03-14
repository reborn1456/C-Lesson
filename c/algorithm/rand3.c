#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int k;

	srand(time(0));  //to shuffle the numbers
	rand();
	k = rand() % 100 + 1;

	if (k <= 30)
	{
		printf("Critical Attack. \n");
	}
	else
	{
		printf("Normal Attack. \n");
	}

	system("pause");
	return 0;
}