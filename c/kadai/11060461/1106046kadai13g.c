// 1106046 kadai13g.c

#include <stdio.h>

void print(char *a, int num)
{
	if (num == 1)
	{
		printf("A--- %d \t B--- %d \t C--- %d \t D--- %d \t E--- %d \n", 'A', 'B', 'C', 'D', 'E');
	}
	else if (*a == 'D')
	{
		printf("A--- %d \t B--- %d \t C--- %d \t D--- %d \t E--- %d \n", 'A', 'B', 'C', 'D', 'E');
	}
	else if (*a == 'H')
	{
		printf("A--- 0x%x \t B--- 0x%x \t C--- 0x%x \t D--- 0x%x \t E--- 0x%x \n", 'A', 'B', 'C', 'D', 'E');
	}

	return;
}

main(int argc, char *argv[])
{
	char *a;

	a = argv[1];

	print(a, argc);

	system("pause");
	return 0;
}