#include <stdio.h>

main()
{
	int c;
	char dumy[256];

	c = getchar();
	while (c != EOF)  //when ctrl Z is pressed, stop
	{
		putchar(c);
		putchar('\n');
		gets (dumy);
		c = getchar();
	}

	system("pause");
	return 0;
}