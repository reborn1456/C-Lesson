// 1106046 kadai043.c

#include <stdio.h>

main()
{
	int moji = 0;
	
	printf("ASCII character code(stop when -1 is entered): ");
	scanf("%d", &moji);

	while (moji != -1)
	{
		printf("%c \n", moji);

		printf("ASCII character code(stop when -1 is entered): ");
		scanf("%d", &moji);
	}

	system("pause");
	return 0;
}