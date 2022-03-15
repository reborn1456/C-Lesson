// 1106046 kadai099.c

#include <stdio.h>

main()
{
	char word[20];
	int t = 0;

	printf("Word and repeat by how many times: ");
	scanf("%s %d", &word[0], &t);

	for (int i = 0; i < t; i++)
	{
		printf("%s\t", &word[0]);
	}
	printf("\n");

	system("pause");
	return 0;
}