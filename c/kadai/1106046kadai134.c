// 1106046 kadai134.c

#include <stdio.h>

main()
{
	int c;
	char data[256];

	printf("Enter a word (stops when Ctrl + Z is pressed): ");
	c = scanf("%s", &data);
	while (c != EOF)  //when ctrl Z is pressed, stop
	{
		printf("%s \n", data);
		printf("Enter a word (stops when Ctrl + Z is pressed): ");
		c = scanf("%s", &data);
	}

	system("pause");
	return 0;
}