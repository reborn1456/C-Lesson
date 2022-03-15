// 1106046 kadai139.c

#include <stdio.h>

void Print(char alf, int num)
{
	for (num; num > 0; num--)
	{
		printf("%c", alf);
	}
	printf("\n");
}

main()
{
	int i;
	char w;

	printf("Letter: ");
	scanf("%c", &w);
	printf("Whole Number: ");
	scanf("%d", &i);

	Print(w, i);

	system("pause");
	return 0;
}