#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int dice;
	srand(time(0));  //to shuffle the numbers
	dice = rand() % 6 + 1;
	printf("The random number  on dice is %d. \n", dice);

	system("pause");
	return 0;
}