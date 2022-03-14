#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int i, target, data[20], work;

	for (i = 0; i < 20; i++)
	{
		data[i] = i+1;

		printf("%d\t", data[i]);
	}

	printf("\n\n");

	srand(time(0));  //to shuffle the numbers
	rand();  // similar number shows up often, therefore get this 1st number but not use it
	for (i = 19; i > 0; i--)
	{
		target = rand() % i;

		work = data[i];
		data[i] = data[target];
		data[target] = work;

		printf("%d\t", data[i]);
	}
	
	printf("\n");

	system("pause");
	return 0;
}