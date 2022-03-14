#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int p, c;

	srand(time(0));  //to shuffle the numbers
	rand();

	printf("Choose one: \n");
	printf("1: Rock\t2: Paper\t3: Scissors > ");
	scanf("%d", &p);
	printf("\n\n");

	switch (p)
	{
	case 1:
		printf("Player: Rock. \n");
		break;
	case 2:
		printf("Player: Paper. \n");
		break;
	case 3:
		printf("Player: Scissors. \n");
	}

	c = rand() % 3;
	switch (c)
	{
	case 0:
		printf("Computer: Rock. \n");
		break;
	case 1:
		printf("Computer: Paper. \n");
		break;
	case 2:
		printf("Computer: Scissors. \n");
	}
	printf("\n\n");

	if ((p-1)>c)

	switch ((p - 1))
	{
	case 0:
		printf("You win. \n");
		break;
	case 1:
		printf("Computer: Paper. \n");
		break;
	case 2:
		printf("Computer: Scissors. \n");
	}


	system("pause");
	return 0;
}