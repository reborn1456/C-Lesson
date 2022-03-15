// 1106046 kadai112.c

#include <stdio.h>

main()
{
	char data1[6] = { 'a', 'b', 'c', 'd', 'e', '\0' };
	char data2[6];
	int i = 0;

	for (i = 0; data1[i] != '\0'; i++)
	{
		data2[i] = data1[i];
	}
	data2[i] = '\0';


	printf("Copied from Array data1[ ] = ");
	for (i = 0; data1[i] != '\0'; i++)
	{
		printf("%c", data1[i]);
	}
	printf("\n");

	printf("Copied to Array data2[ ] = ");
	for (i = 0; data2[i] != '\0'; i++)
	{
		printf("%c", data2[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}