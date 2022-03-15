// 1106046 kadai114.c

#include <stdio.h>

main()
{
	char data[20];
	int count = 0;

	printf("Type a word: ");
	scanf("%s", data);

	printf("Word: ");
	for (int i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
		count++;
	}

	printf("\tNumber of letters: %d \n", count);

	system("pause");
	return 0;
}