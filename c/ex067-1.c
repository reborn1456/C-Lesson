#include <stdio.h>

main()
{
	char c;
	char dumy[256];

	c = 0;

	c = scanf("%c", &dumy[0]);
	printf("%d \n",c);

	system("pause");
	return 0;
}