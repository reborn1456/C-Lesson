// 1106046 kadai111.c

#include <stdio.h>

main()
{
	char data[6] = { 'a', 'b', 'c', 'd', 'e', '\0' };

	for (int i = 0; data[i] != '\0'; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}