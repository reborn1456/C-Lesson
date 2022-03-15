// 1106046 kadai084.c

#include <stdio.h>

main()
{
	int num1 = 0, num2 = 0, sum = 0, count = 0;

	while (num1 != 1234567890987654321 || num2 != 1234567890987654321)
	{
		printf("A whole number 1 (will stop if -999 is entered): ");
		scanf("%d", &num1);
		printf("A whole number 2 (will stop if -999 is entered): ");
		scanf("%d", &num2);

		if (num1 == -999 || num2 == -999)
		{
			break;
		}

		if (num1 == 0 || num2 == 0) continue;

		if (num1 != -999 && num2 != -999)
		{
			printf("%d / %d = %d    Remainder: %d \n", num1, num2, num1 / num2, num1%num2);
		}

	}

	system("pause");
	return 0;
}