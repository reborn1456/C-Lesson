// 1106046 kadai053.c

#include <stdio.h>

main()
{
	int num;

	printf("Whole number: ");
	scanf("%d", &num);

	for (int i = 0; i <= 10; i++)
	{
		printf("%d ", num + i);
	}
	printf("\n");

	system("pause");
	return 0;
}