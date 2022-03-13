#include <stdio.h>

main()
{
	char func;

	printf("Incert a function: ");
	scanf("%c", &func);

	switch (func)
	{
	case '+':
		printf("This is addition mark. \n");
		break;
	case '-':
		printf("This is subtraction mark. \n");
		break;
	case '*':
		printf("This is multiplication mark. \n");
		break;
	case '/':
		printf("This is division mark. \n");
		break;
	}

	system("pause");
	return 0;
}