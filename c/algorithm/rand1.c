#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int kazu;

	srand(time(0));  //to shuffle the numbers
	kazu = rand();
	printf("The random number is %d. \n", kazu);

	system("pause");
	return 0;
}