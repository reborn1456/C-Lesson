// 1106046 kadai115.c

#include <stdio.h>

main()
{
	char data[20];

	printf("Type a word: ");
	scanf("%s", data);

	for (int i = 0; data[i] != '\0'; i++)
	{
		putchar(data[i]);
		putchar('\n');
	}

	system("pause");
	return 0;
}