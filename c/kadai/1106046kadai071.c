// 1106046 kadai071.c

#include <stdio.h>

main()
{
	int num1, num2;
	char op;

	printf("Whole number 1: ");
	scanf("%d", &num1);
	printf("Whole number 2: ");
	scanf("%d", &num2);

	printf("Operator: ");
	scanf("%*c%c", &op);

	switch (op)
	{
	case '+':
		printf("%d + %d = %d \n", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%d - %d = %d \n", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%d * %d = %d \n", num1, num2, num1 * num2);
		break;
	case '/':
		printf("%d / %d = %d \n", num1, num2, num1 / num2);
		break;
	case '%':
		printf("%d % %d = %d \n", num1, num2, num1 % num2);
		break;
	}

	system("pause");
	return 0;
}