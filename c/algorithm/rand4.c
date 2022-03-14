#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int un;
	
	srand(time(0));  //to shuffle the numbers
	un = rand() % 5 + 1;

	printf("Your luck today is: ");
	for (un; un != 0; un--)
	{
		printf("☆");
	}
	printf("\n");

	system("pause");
	return 0;
}

// ★☆