// 1106046 kadai113.c

#include <stdio.h>

main()
{
	char data[9] = "GameSoft";
	int count = 0;

	printf("Word: ");
	for (int i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
		count++;
	}
	printf("\n");

	printf("Number of letters: %d \n", count);

	system("pause");
	return 0;
}