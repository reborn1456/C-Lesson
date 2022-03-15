// 1106046 kadai073.c

#include <stdio.h>

main()
{
	int num;
	char base;

	printf("Decimal number: ");
	scanf("%d", &num);

	printf("Alphabet(o or h or d): ");
	scanf("%*c%c", &base);

	switch (base)
	{
	case 'o':
		printf("%o \n", num);
		break;
	case 'h':
		printf("%X \n", num);
		break;
	case 'd':
		printf("%d \n", num);
		break;
	}

	system("pause");
	return 0;
}