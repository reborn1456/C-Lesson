#include <stdio.h>

main()
{
	int p;
	char dumy[256];

	p = gets(dumy);
	while (p != NULL)  
	{
		printf("%s", dumy);
		putchar('\n');
		p = gets(dumy);
	}

	system("pause");
	return 0;
}