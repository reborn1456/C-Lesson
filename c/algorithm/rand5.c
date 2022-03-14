#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int num, i;

	srand(time(0));  //to shuffle the numbers
	
	for (i = 1; i <= 100; i++)
	{
		num = rand() % 300 + 1;
		printf("\t%d\t", num);
	}
	printf("\n");

	system("pause");
	return 0;
}