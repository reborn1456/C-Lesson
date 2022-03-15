// 1106046 kadai044.c

#include <stdio.h>

main()
{
	int num = 0;

	printf("Whole number(stop when -999 is entered): ");
	scanf("%d", &num);

	while (num != -999)
	{
		printf("Octal: %o\tHexadecimal: %X \n", num, num);  //%#x to add 0x in the begining automatically

		printf("Whole number(stop when -999 is entered): ");
		scanf("%d", &num);
	}

	system("pause");
	return 0;
}